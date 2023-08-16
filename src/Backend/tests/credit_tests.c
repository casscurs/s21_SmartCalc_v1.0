#include "../credit_calculator/credit.h"
#include "../main_calculator/calc.h"
#include "tests.h"

START_TEST(test_annuity_calculation) {
  char sumStr[] = "100000";
  char periodStr[] = "12";
  char percentStr[] = "10";
  creditRes res = {0};
  int type = ANNUITY;

  int result = credit(sumStr, periodStr, percentStr, type, &res);

  ck_assert_int_eq(result, CORRECT);
  ck_assert_double_eq_tol(8791.59, res.monthly, 0.1);
  ck_assert_double_eq_tol(5499.08, res.overpay, 0.1);
  ck_assert_double_eq_tol(105499.08, res.total, 0.1);
  if (res.valArr) {
    free(res.valArr);
  }
}
END_TEST

START_TEST(test_differentiated_calculation) {
  char sumStr[] = "50000";
  char periodStr[] = "24";
  char percentStr[] = "8";
  int type = DIFFERENTIATED;
  creditRes res = {0};

  int result = credit(sumStr, periodStr, percentStr, type, &res);

  ck_assert_int_eq(result, CORRECT);
  ck_assert_double_eq_tol(2097.22, res.monthly, 0.1);
  ck_assert_double_eq_tol(4166.67, res.overpay, 0.1);
  ck_assert_double_eq_tol(54166.67, res.total, 0.1);
  if (res.valArr) {
    free(res.valArr);
  }
}
END_TEST

START_TEST(test_negative_sum) {
  char sumStr[] = "-50000";
  char periodStr[] = "24";
  char percentStr[] = "8";
  int type = ANNUITY;
  creditRes res = {0};

  int result = credit(sumStr, periodStr, percentStr, type, &res);

  if (res.valArr) {
    free(res.valArr);
  }

  ck_assert_int_eq(result, ERROR);
}
END_TEST

START_TEST(test_fractional_period) {
  char sumStr[] = "100000";
  char periodStr[] = "12.5";
  char percentStr[] = "10";
  int type = ANNUITY;
  creditRes res = {0};

  int result = credit(sumStr, periodStr, percentStr, type, &res);

  if (res.valArr) {
    free(res.valArr);
  }

  ck_assert_int_eq(result, ERROR);
}
END_TEST

START_TEST(test_negative_percent) {
  char sumStr[] = "100000";
  char periodStr[] = "12";
  char percentStr[] = "-10";
  int type = ANNUITY;
  creditRes res = {0};

  int result = credit(sumStr, periodStr, percentStr, type, &res);

  if (res.valArr) {
    free(res.valArr);
  }

  ck_assert_int_eq(result, ERROR);
}
END_TEST

START_TEST(test_large_annuity_calculation) {
  char sumStr[] = "1000000";
  char periodStr[] = "120";
  char percentStr[] = "5";
  int type = ANNUITY;
  creditRes res = {0};

  int result = credit(sumStr, periodStr, percentStr, type, &res);

  ck_assert_int_eq(result, CORRECT);
  ck_assert_double_eq_tol(10606.55, res.monthly, 1);
  ck_assert_double_eq_tol(272786.00, res.overpay, 1);
  ck_assert_double_eq_tol(1272786.00, res.total, 1);
  if (res.valArr) {
    free(res.valArr);
  }
}
END_TEST

START_TEST(test_large_differentiated_calculation) {
  char sumStr[] = "5000000";
  char periodStr[] = "240";
  char percentStr[] = "8";
  int type = DIFFERENTIATED;
  creditRes res = {0};

  int result = credit(sumStr, periodStr, percentStr, type, &res);

  ck_assert_int_eq(result, CORRECT);
  ck_assert_double_eq_tol(20972.22, res.monthly, 1);
  ck_assert_double_eq_tol(4016666.67, res.overpay, 1);
  ck_assert_double_eq_tol(9016666.67, res.total, 1);
  if (res.valArr) {
    free(res.valArr);
  }
}
END_TEST

START_TEST(test_null_arguments) {
  int type = ANNUITY;
  creditRes res = {0};
  int result = credit(NULL, NULL, NULL, type, &res);

  ck_assert_int_eq(result, ERROR);
}
END_TEST

START_TEST(test_zero_arguments) {
  char sumStr[] = "0";
  char periodStr[] = "0";
  char percentStr[] = "0";
  int type = ANNUITY;
  creditRes res = {0};

  int result = credit(sumStr, periodStr, percentStr, type, &res);

  ck_assert_int_eq(result, ERROR);
}
END_TEST

Suite *suite_credit(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("test");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_annuity_calculation);
  tcase_add_test(tc_core, test_differentiated_calculation);
  tcase_add_test(tc_core, test_negative_sum);
  tcase_add_test(tc_core, test_fractional_period);
  tcase_add_test(tc_core, test_negative_percent);
  tcase_add_test(tc_core, test_large_annuity_calculation);
  tcase_add_test(tc_core, test_large_differentiated_calculation);
  tcase_add_test(tc_core, test_zero_arguments);
  tcase_add_test(tc_core, test_null_arguments);

  suite_add_tcase(s, tc_core);

  return s;
}