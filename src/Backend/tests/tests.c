#include "tests.h"

int main(void) {
  Suite *list_cases[] = {suite_calc(), suite_credit(), suite_deposit(), NULL};

  for (Suite **current_testcase = list_cases; *current_testcase != NULL;
       current_testcase++) {
    run_testcase(*current_testcase);
  }
  return 0;
}

void run_testcase(Suite *testcase) {
  SRunner *sr = srunner_create(testcase);
  srunner_run_all(sr, CK_NORMAL);
  srunner_free(sr);
}