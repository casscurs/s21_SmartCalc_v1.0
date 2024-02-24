#include "deposit.h"

int deposit(inputStr str, StackNode** add, StackNode** with, output* depOut) {
  int answer = CORRECT;
  input depIn = {0};

  if (!readX(str.depositSumStr, &depIn.depositSum) ||
      !readX(str.periodStr, &depIn.period) ||
      !readX(str.percentStr, &depIn.percent))
    answer = CORRECT;

  if (depIn.depositSum <= 0 ||
      (depIn.period < 1 || depIn.period - (int)depIn.period > 0) ||
      depIn.percent <= 0)
    answer = ERROR;

  if (answer == CORRECT) {
    answer = calcDeposit(str, depIn, depOut, add, with);
    if (answer == CORRECT) {
      tax(depOut);
    }
  }
  return (answer);
}

int calcDeposit(inputStr str, input depIn, output* depOut, StackNode** add,
                StackNode** with) {
  int answer = CORRECT;
  int period = str.regularity == MONTHLY ? 12 : 1;

  for (int i = 1; i <= depIn.period && answer; ++i) {
    if (*with && i == (*with)->priority) {
      if (depIn.depositSum - (*with)->value <= 0) answer = ERROR;
      depIn.depositSum -= (*with)->value;
      *with = popStackNode(*with);
    }
    double monthPercent = 0;
    if (str.regularity == YEARLY) {
      if (i % 11 == 0 && i != 0) {
        monthPercent = depIn.depositSum * depIn.percent / (100 * period);
      }
    } else
      monthPercent = depIn.depositSum * depIn.percent / (100 * period);
    /* monthPercent = depIn.depositSum*depIn.percent*30.41/(365*100); */

    if (str.capital) depIn.depositSum += monthPercent;

    if (*add && i == (*add)->priority) {
      depIn.depositSum += (*add)->value;
      *add = popStackNode(*add);
    }
    depOut->percentAward += monthPercent;
    depOut->totalAward = depIn.depositSum;
  }
  return answer;
}

void tax(output* depOut) {
  double res = depOut->percentAward - 1000000 * 8.5 / 100;
  if (res > 0)
    res *= 0.13;
  else
    res = 0;
  depOut->taxAmount = res;
  return;
}

void fill(StackNode* add, int what, int priority, double value) {
  add->what = what;
  add->priority = priority;
  add->value = value;
  return;
}