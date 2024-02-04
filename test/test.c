#include <check.h>

#include "../src/s21_math.h"
#include "s21_abs_test.c"
#include "s21_acos_test.c"
#include "s21_asin_test.c"
#include "s21_atan_test.c"
#include "s21_ceil_test.c"
#include "s21_cos_test.c"
#include "s21_exp_test.c"
#include "s21_fabs_test.c"
#include "s21_floor_test.c"
#include "s21_fmod_test.c"
#include "s21_log_test.c"
#include "s21_pow_test.c"
#include "s21_sin_test.c"
#include "s21_sqrt_test.c"
#include "s21_tan_test.c"

int main() {
  int number_failed;
  Suite *abs_s, *fabs_s, *acos_s, *asin_s, *atan_s, *cos_s, *exp_s, *sin_s,
      *sqrt_s, *tan_s, *fmod_s, *pow_s, *floor_s, *ceil_s, *log_s;
  SRunner *sr;

  abs_s = abs_suite();
  fabs_s = fabs_suite();
  ceil_s = ceil_suite();
  floor_s = floor_suite();
  log_s = log_suite();
  acos_s = acos_suite();
  asin_s = asin_suite();
  atan_s = atan_suite();
  cos_s = cos_suite();
  exp_s = exp_suite();
  sin_s = sin_suite();
  sqrt_s = sqrt_suite();
  tan_s = tan_suite();
  pow_s = pow_suite();
  fmod_s = fmod_suite();

  sr = srunner_create(abs_s);
  srunner_set_fork_status(sr, CK_FORK);
  srunner_add_suite(sr, fabs_s);
  srunner_add_suite(sr, ceil_s);
  srunner_add_suite(sr, floor_s);
  srunner_add_suite(sr, log_s);
  srunner_add_suite(sr, acos_s);
  srunner_add_suite(sr, asin_s);
  srunner_add_suite(sr, atan_s);
  srunner_add_suite(sr, cos_s);
  srunner_add_suite(sr, exp_s);
  srunner_add_suite(sr, sin_s);
  srunner_add_suite(sr, sqrt_s);
  srunner_add_suite(sr, tan_s);
  srunner_add_suite(sr, pow_s);
  srunner_add_suite(sr, fmod_s);

  srunner_run_all(sr, CK_NORMAL);

  number_failed = srunner_ntests_failed(sr);

  srunner_free(sr);

  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}