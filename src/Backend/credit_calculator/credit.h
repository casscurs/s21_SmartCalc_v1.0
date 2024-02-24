#include "../main_calculator/calc.h"

#ifndef CREDIT_H
#define CREDIT_H

#define ANNUITY 1
#define DIFFERENTIATED 0

typedef struct {
  double sum;
  double period;
  double percent;
} creditParam;

typedef struct {
  double monthly;
  double overpay;
  double total;
  double* valArr;
} creditRes;

/* Общая функция для вычисления кредита*/
int credit(char* sumStr, char* periodStr, char* percentStr, int type,
           creditRes* res);
/* Математическая часть*/
void calcCredit(creditParam param, creditRes* res, int type);

#endif  // CREDIT_H