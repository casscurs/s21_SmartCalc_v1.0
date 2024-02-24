#include "../deposit_calculator/deposit.h"
#include "../main_calculator/calc.h"
#include "tests.h"

START_TEST(test_monthly_calculation) {
  output depOut = {0};
  inputStr str = {0};
  StackNode* add = NULL;
  StackNode* with = NULL;
  str.depositSumStr = "350000";
  str.percentStr = "4.7";
  str.periodStr = "9";

  add = pushStackNode(add);
  fill(add, ADDITION, 1, 500);
  with = pushStackNode(with);
  fill(with, WITHRAWAL, 2, 100);

  sortStackByPriority(&with);
  sortStackByPriority(&add);
  int result = deposit(str, &add, &with, &depOut);

  ck_assert_int_eq(result, CORRECT);
  ck_assert_double_eq_tol(12350.033, depOut.percentAward, 0.1);
  ck_assert_double_eq_tol(0, depOut.taxAmount, 0.1);
  ck_assert_double_eq_tol(350400.0, depOut.totalAward, 0.1);

  freeStack(add);
  freeStack(with);
}
END_TEST

START_TEST(test_yearly_calculation) {
  output depOut = {0};
  inputStr str = {0};
  StackNode* add = NULL;
  StackNode* with = NULL;
  str.depositSumStr = "350000";
  str.percentStr = "4.7";
  str.periodStr = "13";
  str.regularity = YEARLY;

  add = pushStackNode(add);
  fill(add, ADDITION, 1, 500);
  with = pushStackNode(with);
  fill(with, WITHRAWAL, 2, 100);

  sortStackByPriority(&with);
  sortStackByPriority(&add);
  int result = deposit(str, &add, &with, &depOut);

  ck_assert_int_eq(result, CORRECT);
  ck_assert_double_eq_tol(16468.8, depOut.percentAward, 0.1);
  ck_assert_double_eq_tol(0, depOut.taxAmount, 0.1);
  ck_assert_double_eq_tol(350400.0, depOut.totalAward, 0.1);

  freeStack(add);
  freeStack(with);
}
END_TEST

START_TEST(test_negative_sum) {
  output depOut = {0};
  inputStr str = {0};
  StackNode* add = NULL;
  StackNode* with = NULL;
  str.depositSumStr = "-350000";
  str.percentStr = "4.7";
  str.periodStr = "9";

  add = pushStackNode(add);
  fill(add, ADDITION, 1, 500);
  with = pushStackNode(with);
  fill(with, WITHRAWAL, 2, 100);

  sortStackByPriority(&with);
  sortStackByPriority(&add);
  int result = deposit(str, &add, &with, &depOut);

  ck_assert_int_eq(result, ERROR);

  freeStack(add);
  freeStack(with);
}
END_TEST

START_TEST(test_fractional_period) {
  output depOut = {0};
  inputStr str = {0};
  StackNode* add = NULL;
  StackNode* with = NULL;
  str.depositSumStr = "350000";
  str.percentStr = "4.7";
  str.periodStr = "9.1";

  add = pushStackNode(add);
  fill(add, ADDITION, 1, 500);
  with = pushStackNode(with);
  fill(with, WITHRAWAL, 2, 100);

  sortStackByPriority(&with);
  sortStackByPriority(&add);
  int result = deposit(str, &add, &with, &depOut);

  ck_assert_int_eq(result, ERROR);

  freeStack(add);
  freeStack(with);
}
END_TEST

START_TEST(test_negative_percent) {
  output depOut = {0};
  inputStr str = {0};
  StackNode* add = NULL;
  StackNode* with = NULL;
  str.depositSumStr = "350000";
  str.percentStr = "-4.7";
  str.periodStr = "9";

  add = pushStackNode(add);
  fill(add, ADDITION, 1, 500);
  with = pushStackNode(with);
  fill(with, WITHRAWAL, 2, 100);

  sortStackByPriority(&with);
  sortStackByPriority(&add);
  int result = deposit(str, &add, &with, &depOut);

  ck_assert_int_eq(result, ERROR);

  freeStack(add);
  freeStack(with);
}
END_TEST

START_TEST(test_large_monthly_calculation) {
  output depOut = {0};
  inputStr str = {0};
  StackNode* add = NULL;
  StackNode* with = NULL;
  str.depositSumStr = "15000000";
  str.percentStr = "5";
  str.periodStr = "14";

  add = pushStackNode(add);
  fill(add, ADDITION, 1, 1000000);
  with = pushStackNode(with);
  fill(with, WITHRAWAL, 2, 500000);

  sortStackByPriority(&with);
  sortStackByPriority(&add);
  int result = deposit(str, &add, &with, &depOut);

  ck_assert_int_eq(result, CORRECT);
  ck_assert_double_eq_tol(902083.33, depOut.percentAward, 0.1);
  ck_assert_double_eq_tol(106220.833, depOut.taxAmount, 0.1);
  ck_assert_double_eq_tol(15500000.0, depOut.totalAward, 0.1);

  freeStack(add);
  freeStack(with);
}
END_TEST

START_TEST(test_large_yearly_calculation) {
  output depOut = {0};
  inputStr str = {0};
  StackNode* add = NULL;
  StackNode* with = NULL;
  str.depositSumStr = "15000000";
  str.percentStr = "5";
  str.periodStr = "14";
  str.regularity = YEARLY;

  add = pushStackNode(add);
  fill(add, ADDITION, 1, 1000000);
  with = pushStackNode(with);
  fill(with, WITHRAWAL, 2, 500000);

  sortStackByPriority(&with);
  sortStackByPriority(&add);
  int result = deposit(str, &add, &with, &depOut);

  ck_assert_int_eq(result, CORRECT);
  ck_assert_double_eq_tol(775000.0, depOut.percentAward, 0.1);
  ck_assert_double_eq_tol(89700.0, depOut.taxAmount, 0.1);
  ck_assert_double_eq_tol(15500000.0, depOut.totalAward, 0.1);

  freeStack(add);
  freeStack(with);
}
END_TEST

START_TEST(test_null_arguments) {
  inputStr str = {0};
  StackNode* add = NULL;
  StackNode* with = NULL;
  str.depositSumStr = "350000";
  str.percentStr = "-4.7";
  str.periodStr = "9";

  add = pushStackNode(add);
  fill(add, ADDITION, 1, 500);
  with = pushStackNode(with);
  fill(with, WITHRAWAL, 2, 100);

  sortStackByPriority(&with);
  sortStackByPriority(&add);
  int result = deposit(str, NULL, NULL, NULL);

  ck_assert_int_eq(result, ERROR);

  freeStack(add);
  freeStack(with);
}
END_TEST

START_TEST(test_zero_arguments) {
  output depOut = {0};
  inputStr str = {0};
  StackNode* add = NULL;
  StackNode* with = NULL;
  str.depositSumStr = "000";
  str.percentStr = "0";
  str.periodStr = "0";

  add = pushStackNode(add);
  fill(add, ADDITION, 1, 500);
  with = pushStackNode(with);
  fill(with, WITHRAWAL, 2, 100);

  sortStackByPriority(&with);
  sortStackByPriority(&add);
  int result = deposit(str, &add, &with, &depOut);

  ck_assert_int_eq(result, ERROR);

  freeStack(add);
  freeStack(with);
}
END_TEST

START_TEST(test_sort_stack_by_priority) {
  StackNode* apex = NULL;

  apex = pushStackNode(apex);
  fill(apex, ADDITION, 3, 300);

  apex = pushStackNode(apex);
  fill(apex, ADDITION, 1, 100);

  apex = pushStackNode(apex);
  fill(apex, ADDITION, 2, 200);

  sortStackByPriority(&apex);

  ck_assert_ptr_nonnull(apex);
  ck_assert_int_eq(apex->priority, 1);

  apex = apex->next;
  ck_assert_ptr_nonnull(apex);
  ck_assert_int_eq(apex->priority, 2);

  apex = apex->next;
  ck_assert_ptr_nonnull(apex);
  ck_assert_int_eq(apex->priority, 3);

  freeStack(apex);
}
END_TEST

Suite* suite_deposit(void) {
  Suite* s;
  TCase* tc_core;

  s = suite_create("test");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_monthly_calculation);
  tcase_add_test(tc_core, test_yearly_calculation);
  tcase_add_test(tc_core, test_negative_sum);
  tcase_add_test(tc_core, test_fractional_period);
  tcase_add_test(tc_core, test_negative_percent);
  tcase_add_test(tc_core, test_large_monthly_calculation);
  tcase_add_test(tc_core, test_large_yearly_calculation);
  tcase_add_test(tc_core, test_zero_arguments);
  tcase_add_test(tc_core, test_null_arguments);
  tcase_add_test(tc_core, test_sort_stack_by_priority);

  suite_add_tcase(s, tc_core);

  return s;
}