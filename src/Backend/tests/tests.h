#ifndef SRC_TESTS_TESTS_H_
#define SRC_TESTS_TESTS_H_

#include <check.h>

#include "../main_calculator/calc.h"
#include "../credit_calculator/credit.h"
#include "../deposit_calculator/deposit.h"

#define SUCCESS 1
#define FAILURE 0

Suite *suite_calc(void);
Suite *suite_credit(void);
Suite *suite_deposit(void);

void run_testcase(Suite *testcase);


#endif  // SRC_TESTS_TESTS_H_