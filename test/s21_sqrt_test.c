#include <check.h>

#include "../src/s21_math.h"
START_TEST(s21_sqrt_test_1) {
  long double value = 1;
  ck_assert_ldouble_eq_tol(s21_sqrt(value), sqrtl(value), S21_EPS);
}
END_TEST

START_TEST(s21_sqrt_test_2) {
  long double value = -1765654;
  ck_assert_ldouble_nan(s21_sqrt(value));
}
END_TEST

START_TEST(s21_sqrt_test_3) {
  long double value = 765432;
  ck_assert_ldouble_eq_tol(s21_sqrt(value), sqrtl(value), S21_EPS);
}
END_TEST

START_TEST(s21_sqrt_test_4) {
  long double value = 0;
  ck_assert_ldouble_eq_tol(s21_sqrt(value), sqrtl(value), S21_EPS);
}
END_TEST

START_TEST(s21_sqrt_test_5) {
  long double value = 324567.34654;
  ck_assert_ldouble_eq_tol(s21_sqrt(value), sqrtl(value), S21_EPS);
}
END_TEST

START_TEST(s21_sqrt_test_6) {
  long double value = -0;
  ck_assert_ldouble_eq_tol(s21_sqrt(value), sqrtl(value), S21_EPS);
}
END_TEST

START_TEST(s21_sqrt_test_7) {
  long double value = S21_INF_POS;
  ck_assert_ldouble_infinite(s21_sqrt(value));
}
END_TEST

START_TEST(s21_sqrt_test_8) {
  long double value = -S21_INF_POS;
  ck_assert_ldouble_nan(s21_sqrt(value));
}
END_TEST

START_TEST(s21_sqrt_test_9) {
  for (int i = -1000; i < 1000; i += 10) {
    ck_assert_int_eq(s21_sqrt(i), sqrt(i));
  }
}

END_TEST

START_TEST(s21_sqrt_test_10) {
  long double value = +0;
  ck_assert_ldouble_eq_tol(s21_sqrt(value), sqrtl(value), S21_EPS);
}
END_TEST

Suite *sqrt_suite() {
  Suite *s;
  TCase *tc_core;
  s = suite_create("sqrt(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_sqrt_test_1);
  tcase_add_test(tc_core, s21_sqrt_test_2);
  tcase_add_test(tc_core, s21_sqrt_test_3);
  tcase_add_test(tc_core, s21_sqrt_test_4);
  tcase_add_test(tc_core, s21_sqrt_test_5);
  tcase_add_test(tc_core, s21_sqrt_test_6);
  tcase_add_test(tc_core, s21_sqrt_test_7);
  tcase_add_test(tc_core, s21_sqrt_test_8);
  tcase_add_test(tc_core, s21_sqrt_test_9);
  tcase_add_test(tc_core, s21_sqrt_test_10);
  suite_add_tcase(s, tc_core);
  return s;
}
