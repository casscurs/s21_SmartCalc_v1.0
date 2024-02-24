#include "../main_calculator/calc.h"

#ifndef DEPOSIT_H
#define DEPOSIT_H

#define YEARLY 1
#define MONTHLY 0

typedef struct {
  char* depositSumStr;
  char* periodStr;
  char* percentStr;
  int capital;
  int regularity;
} inputStr;

typedef struct {
  double depositSum;
  double period;
  double percent;
  double tax;
} input;

typedef struct {
  double percentAward;
  double taxAmount;
  double totalAward;
} output;

/* Основной блок для депозитного калькулятора */
int deposit(inputStr str, StackNode** add, StackNode** with, output* depOut);
/* Вычислительный блок для депозитного калькулятора */
int calcDeposit(inputStr str, input depIn, output* depOut, StackNode** add,
                StackNode** with);
/* Расчет налога */
void tax(output* depOut);
/* Заполнение полей структуры */
void fill(StackNode* add, int what, int priority, double value);

#endif  // DEPOSIT_H