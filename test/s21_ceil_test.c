#include <check.h>

#include "../src/s21_math.h"

START_TEST(s21_ceil_test_1) {
  long double value = 21.21;
  ck_assert_ldouble_eq(s21_ceil(value), ceil(value));
}
END_TEST

START_TEST(s21_ceil_test_2) {
  long double value = -21.91;
  ck_assert_ldouble_eq(s21_ceil(value), ceil(value));
}
END_TEST

START_TEST(s21_ceil_test_3) {
  long double value = S21_INF_POS;
  ck_assert_ldouble_eq(s21_ceil(value), ceil(value));
}
END_TEST

START_TEST(s21_ceil_test_4) {
  long double value = -S21_INF_POS;
  ck_assert_ldouble_eq(s21_ceil(value), ceil(value));
}
END_TEST

START_TEST(s21_ceil_test_5) {
  long double value = -0.15;
  ck_assert_ldouble_eq(s21_ceil(value), ceil(value));
}
END_TEST

START_TEST(s21_ceil_test_7) {
  long double value = S21_INF_POS;
  ck_assert_ldouble_infinite(s21_ceil(value));
}
END_TEST

START_TEST(s21_ceil_test_8) {
  long double value = S21_NAN;
  ck_assert_ldouble_nan(s21_ceil(value));
}
END_TEST

START_TEST(s21_ceil_test_9) {
  long double value = 0;
  ck_assert_ldouble_eq(s21_ceil(value), ceil(value));
}
END_TEST

START_TEST(s21_ceil_test_10) {
  long double value = 0.0;
  ck_assert_ldouble_eq(s21_ceil(value), ceil(value));
}
END_TEST

START_TEST(s21_ceil_test_11) {
  long double value = -0.0;
  ck_assert_ldouble_eq(s21_ceil(value), ceil(value));
}
END_TEST

START_TEST(s21_ceil_test_12) {
  long double value = 16.34567765;
  ck_assert_ldouble_eq(s21_ceil(value), ceil(value));
}
END_TEST

START_TEST(s21_ceil_test_13) {
  long double value = -16.37765;
  ck_assert_ldouble_eq(s21_ceil(value), ceil(value));
}
END_TEST

START_TEST(s21_ceil_test_14) {
  long double value = -16345452.37765;
  ck_assert_ldouble_eq_tol(s21_ceil(value), ceil(value), S21_EPS);
}
END_TEST

START_TEST(s21_ceil_test_15) {
  long double value = -864.37765;
  ck_assert_ldouble_eq_tol(s21_ceil(value), ceil(value), S21_EPS);
}
END_TEST

Suite *ceil_suite() {
  Suite *s;
  TCase *tc_core;
  s = suite_create("ceil(x)");
  tc_core = tcase_create("core");

  tcase_add_test(tc_core, s21_ceil_test_1);
  tcase_add_test(tc_core, s21_ceil_test_2);
  tcase_add_test(tc_core, s21_ceil_test_3);
  tcase_add_test(tc_core, s21_ceil_test_4);
  tcase_add_test(tc_core, s21_ceil_test_5);
  tcase_add_test(tc_core, s21_ceil_test_7);
  tcase_add_test(tc_core, s21_ceil_test_8);
  tcase_add_test(tc_core, s21_ceil_test_9);
  tcase_add_test(tc_core, s21_ceil_test_10);
  tcase_add_test(tc_core, s21_ceil_test_11);
  tcase_add_test(tc_core, s21_ceil_test_12);
  tcase_add_test(tc_core, s21_ceil_test_13);
  tcase_add_test(tc_core, s21_ceil_test_14);
  tcase_add_test(tc_core, s21_ceil_test_15);

  suite_add_tcase(s, tc_core);
  return s;
}