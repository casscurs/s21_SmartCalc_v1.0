#include "../main_calculator/calc.h"
#include "tests.h"

START_TEST(test_plus) {
  char str[256] = "+1.234+3.45+9.877";
  char x[256] = "";
  double res = 0;
  calc(str, x, &res);
  ck_assert_float_eq(+1.234 + 3.45 + 9.877, res);
}
END_TEST

START_TEST(test_minus) {
  char str[256] = "-1.25-(-3.45)-24";
  char x[256] = "";
  double res = 0;
  calc(str, x, &res);
  ck_assert_float_eq(-1.25 - (-3.45) - 24, res);
}
END_TEST

START_TEST(test_mult_1) {
  char str[256] = "-1*-1*-1.28485";
  char x[256] = "";
  double res = 0;
  calc(str, x, &res);
  ck_assert_float_eq(-1 * -1 * -1.28485, res);
}
END_TEST

START_TEST(test_mult_2) {
  char str[256] = "2.35+2.66*2.34 + 7*(8.32323+1)";
  char x[256] = "";
  double res = 0;
  calc(str, x, &res);
  ck_assert_float_eq(2.35 + 2.66 * 2.34 + 7 * (8.32323 + 1), res);
}
END_TEST

START_TEST(test_div) {
  char str[256] = "1.25/(3.45-1)";
  char x[256] = "";
  double res = 0;
  calc(str, x, &res);
  ck_assert_float_eq(1.25 / (3.45 - 1), res);
}
END_TEST

START_TEST(test_mod) {
  char str[256] = "1.25mod3.5";
  char x[256] = "";
  double res = 0;
  calc(str, x, &res);
  ck_assert_float_eq(fmod(1.25, 3.5), res);
}
END_TEST

START_TEST(test_pow) {
  char str[256] = "1.25^3.45+1";
  char x[256] = "";
  double res = 0;
  calc(str, x, &res);
  ck_assert_float_eq(powf(1.25, 3.45) + 1, res);
}
END_TEST

START_TEST(test_x) {
  char str[256] = "(sin(+x)/-x * x*log(cos(cos(x))))";
  char x[256] = "239";
  double res = 0;
  calc(str, x, &res);
  double eq = (sin(+239) / -239 * 239 * log10(cos(cos(239))));
  ck_assert_float_eq(res, eq);
}
END_TEST

START_TEST(test_brackets) {
  char str[256] = "sin(sin(sin(2)))";
  char x[256] = "";
  double res = 0;
  calc(str, x, &res);
  ck_assert_float_eq(sin(sin(sin(2))), res);
}
END_TEST

START_TEST(test_sin) {
  char str[256] = "sin((5.23+1.25)*(0.25+0.001))";
  char x[256] = "";
  double res = 0;
  calc(str, x, &res);
  ck_assert_float_eq(sin((5.23 + 1.25) * (0.25 + 0.001)), res);
}
END_TEST

START_TEST(test_cos) {
  char str[256] = "cos((5.23+1.25)*(0.25+0.001))";
  char x[256] = "";
  double res = 0;
  calc(str, x, &res);
  ck_assert_float_eq(cos((5.23 + 1.25) * (0.25 + 0.001)), res);
}
END_TEST

START_TEST(test_tan) {
  char str[256] = "tan((5.23+1.25)*(0.25+0.001))";
  char x[256] = "";
  double res = 0;
  calc(str, x, &res);
  ck_assert_float_eq(tan((5.23 + 1.25) * (0.25 + 0.001)), res);
}
END_TEST

START_TEST(test_asin) {
  char str[256] = "asin(7/7.7)";
  char x[256] = "";
  double res = 0;
  calc(str, x, &res);
  ck_assert_float_eq(asin(7 / 7.7), res);
}
END_TEST

START_TEST(test_acos) {
  char str[256] = "acos(7/7.7)";
  char x[256] = "";
  double res = 0;
  calc(str, x, &res);
  ck_assert_float_eq(acos(7 / 7.7), res);
}
END_TEST

START_TEST(test_atan) {
  char str[256] = "atan(7/7.7)";
  char x[256] = "";
  double res = 0;
  calc(str, x, &res);
  ck_assert_float_eq(atan(7 / 7.7), res);
}
END_TEST

START_TEST(test_sqrt) {
  char str[256] = "sqrt(1357.1-(-245.23))";
  char x[256] = "";
  double res = 0;
  calc(str, x, &res);
  ck_assert_float_eq(sqrt(1357.1 - (-245.23)), res);
}
END_TEST

START_TEST(test_ln) {
  char str[256] = "ln(1357.24-245.4324)";
  char x[256] = "";
  double res = 0;
  calc(str, x, &res);
  ck_assert_float_eq(log(1357.24 - 245.4324), res);
}
END_TEST

START_TEST(test_log) {
  char str[256] = "log(1357.24-245.4324)";
  char x[256] = "";
  double res = 0;
  calc(str, x, &res);
  ck_assert_float_eq(log10(1357.24 - 245.4324), res);
}
END_TEST

START_TEST(test_combo) {
  char str[256] = "log(32+1)*7/11*432*(sin(2)*12-45+4)/2";
  char x[256] = "";
  double res = 0;
  calc(str, x, &res);
  ck_assert_float_eq(log10(32 + 1) * 7 / 11 * 432 * (sin(2) * 12 - 45 + 4) / 2,
                     res);
}
END_TEST

START_TEST(test_combo_func) {
  char str[256] = "cos(sin(tan(-0.005)))";
  char x[256] = "";
  double res = 0;
  calc(str, x, &res);
  ck_assert_float_eq(cos(sin(tan(-0.005))), res);
}
END_TEST

START_TEST(test_invalid_input) {
  char *str0 = "log(32+1)*7/11*432*(sin(2)*12-45+4/2";
  double res = 0;
  ck_assert_int_eq(calc(str0, "", &res), 0);

  char *str1 = "cos(cos(cos(2))";
  ck_assert_int_eq(calc(str1, "", &res), 0);

  char *str2 = "cos(3cos(2))";
  ck_assert_int_eq(calc(str2, "", &res), 0);

  char *str3 = "1.234+";
  ck_assert_int_eq(calc(str3, "", &res), 0);

  char *str4 = "1()";
  ck_assert_int_eq(calc(str4, "", &res), 0);

  char *str5 = "1.2.3";
  ck_assert_int_eq(calc(str5, "", &res), 0);

  char *str7 = "cos(*2)";
  ck_assert_int_eq(calc(str7, "", &res), 0);

  char *str8 = ".cos(2)";
  ck_assert_int_eq(calc(str8, "", &res), 0);

  char *str9 = "cos(2)sin(3)";
  ck_assert_int_eq(calc(str9, "", &res), 0);

  char *str10 = "mod(2)(";
  ck_assert_int_eq(calc(str10, "", &res), 0);

  char *str11 = "mod+";
  ck_assert_int_eq(calc(str11, "", &res), 0);

  char *str12 = "1+ 2      -3";
  ck_assert_int_eq(calc(str12, "", &res), 1);

  char *str13 = "x2";
  ck_assert_int_eq(calc(str13, "", &res), 0);

  char *str14 = "x^2";
  ck_assert_int_eq(calc(str14, "2", &res), 1);

  char *str15 = "x^- ";
  ck_assert_int_eq(calc(str15, "", &res), 0);

  char *str16 = "cos(cos(x))";
  ck_assert_int_eq(calc(str16, "2", &res), 1);

  char *str17 =
      "cos((20.2 - 10) * (10mod5 - 10^2) / 10.10 + 1 - cos(x - (10*9+ "
      "sin(2-10 - tan(x)))))";
  ck_assert_int_eq(calc(str17, "2", &res), 1);

  char *str18 =
      "cos((20..2 - 10) * (10mod.5 - 10.^2) / 10.10 + 1 - cos(x - (10*9+ "
      "sin(2-10))))";
  ck_assert_int_eq(calc(str18, "2", &res), 0);

  char *str19 =
      "cos((20.2 - 10) * (10mod5 - 10^2) / 10.10^ + 1 - cos(x - (10*9+ "
      "sin(2-10))))";
  ck_assert_int_eq(calc(str19, "2", &res), 1);

  char *str20 = "()+2";
  ck_assert_int_eq(calc(str20, "", &res), 0);

  char *str21 = "ln(2)";
  ck_assert_int_eq(calc(str21, "", &res), 1);

  char *str22 = "asin(2)";
  ck_assert_int_eq(calc(str22, "", &res), 1);

  char *str23 = "2 + (2 - 2) *";
  ck_assert_int_eq(calc(str23, "", &res), 0);

  char *str24 = "x1";
  ck_assert_int_eq(calc(str24, "2", &res), 0);

  char *str25 = "tan(2 - x^^-)";
  ck_assert_int_eq(calc(str25, "2", &res), 0);

  char *str26 = "2^-";
  ck_assert_int_eq(calc(str26, "", &res), 0);
}
END_TEST

Suite *suite_calc(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("test");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_plus);
  tcase_add_test(tc_core, test_minus);
  tcase_add_test(tc_core, test_mult_1);
  tcase_add_test(tc_core, test_mult_2);
  tcase_add_test(tc_core, test_div);
  tcase_add_test(tc_core, test_mod);
  tcase_add_test(tc_core, test_pow);
  tcase_add_test(tc_core, test_x);
  tcase_add_test(tc_core, test_brackets);
  tcase_add_test(tc_core, test_sin);
  tcase_add_test(tc_core, test_cos);
  tcase_add_test(tc_core, test_tan);
  tcase_add_test(tc_core, test_asin);
  tcase_add_test(tc_core, test_acos);
  tcase_add_test(tc_core, test_atan);
  tcase_add_test(tc_core, test_sqrt);
  tcase_add_test(tc_core, test_ln);
  tcase_add_test(tc_core, test_log);
  tcase_add_test(tc_core, test_combo);
  tcase_add_test(tc_core, test_combo_func);
  tcase_add_test(tc_core, test_invalid_input);

  suite_add_tcase(s, tc_core);

  return s;
}
