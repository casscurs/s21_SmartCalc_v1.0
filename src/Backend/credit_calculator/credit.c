#include "credit.h"

int credit(char* sumStr, char* periodStr, char* percentStr, int type,
           creditRes* res) {
  int answer = CORRECT;
  creditParam param = {0};

  if (!readX(sumStr, &param.sum) || !readX(periodStr, &param.period) ||
      !readX(percentStr, &param.percent))
    answer = ERROR;

  if (param.sum <= 0 ||
      (param.period < 1 || param.period - (int)param.period > 0) ||
      param.percent <= 0)
    answer = ERROR;

  if (answer == CORRECT) {
    calcCredit(param, res, type);
  }
  return (answer);
}

void calcCredit(creditParam param, creditRes* res, int type) {
  double p = param.percent / (100 * 12);
  if (type == ANNUITY) {
    res->monthly = param.sum * (p + p / (pow(1 + p, param.period) - 1));
    res->total = res->monthly * param.period;
    res->overpay = res->total - param.sum;
  }
  if (type == DIFFERENTIATED) {
    double b = 0;
    double ost = param.sum;
    res->valArr = calloc(param.period, sizeof(double));
    b = param.sum / param.period; /* Долговая часть */
    for (int i = 0; i < param.period; ++i) {
      res->monthly = ost * p + b;
      res->total += res->monthly;
      ost -= b;
      (res->valArr)[i] = res->monthly;
    }
    res->overpay = res->total - param.sum;
  }

  return;
}