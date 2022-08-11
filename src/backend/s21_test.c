#include "s21_parsing_object.h"
#include <check.h>

START_TEST(test_1) {
}
END_TEST

int main() {
  Suite *suite = suite_create("S21_TESTS");
  SRunner *srunner = srunner_create(suite);

  TCase *s21_3dviewer_1_case = tcase_create("3dviewer_1");
  suite_add_tcase(suite, s21_3dviewer_1_case);
  tcase_add_test(s21_3dviewer_1_case, test_1);

  srunner_run_all(srunner, CK_VERBOSE);
  int number_failed = srunner_ntests_failed(srunner);
  srunner_free(srunner);

  return (number_failed == 0) ? 0 : 1;
}
