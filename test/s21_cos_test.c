#include <check.h>

#include "../src/s21_math.h"

START_TEST(s21_cos_test_1) {
  long double value = 0;
  ck_assert_ldouble_eq_tol(s21_cos(value), cosl(value), S21_EPS);
}
END_TEST

START_TEST(s21_cos_test_2) {
  long double value = (S21_PI / 2);
  ck_assert_ldouble_eq_tol(s21_cos(value), cosl(value), S21_EPS);
}
END_TEST

START_TEST(s21_cos_test_3) {
  long double value = (S21_PI);
  ck_assert_ldouble_eq_tol(s21_cos(value), cosl(value), S21_EPS);
}

END_TEST

START_TEST(s21_cos_test_4) {
  long double value = (-S21_PI / 2);
  ck_assert_ldouble_eq_tol(s21_cos(value), cosl(value), S21_EPS);
}

END_TEST

START_TEST(s21_cos_test_5) {
  long double value = (S21_PI / 4);
  ck_assert_ldouble_eq_tol(s21_cos(value), cosl(value), S21_EPS);
}

END_TEST

START_TEST(s21_cos_test_6) {
  long double value = (-S21_PI / 4);
  ck_assert_ldouble_eq_tol(s21_cos(value), cosl(value), S21_EPS);
}

END_TEST

START_TEST(s21_cos_test_7) {
  long double value = (S21_PI / 6);
  ck_assert_ldouble_eq_tol(s21_cos(value), cosl(value), S21_EPS);
}

END_TEST

START_TEST(s21_cos_test_8) {
  long double value = (-S21_PI / 6);
  ck_assert_ldouble_eq_tol(s21_cos(value), cosl(value), S21_EPS);
}

END_TEST

START_TEST(s21_cos_test_9) {
  long double value = (S21_PI / 3);
  ck_assert_ldouble_eq_tol(s21_cos(value), cosl(value), S21_EPS);
}

END_TEST

START_TEST(s21_cos_test_10) {
  long double value = (-S21_PI / 3);
  ck_assert_ldouble_eq_tol(s21_cos(value), cosl(value), S21_EPS);
}

END_TEST

START_TEST(s21_cos_test_11) {
  long double value = S21_INF_POS;
  ck_assert_ldouble_nan(s21_cos(value));
}
END_TEST

START_TEST(s21_cos_test_12) {
  long double value = S21_NAN;
  ck_assert_ldouble_nan(s21_cos(value));
}
END_TEST

Suite *cos_suite() {
  Suite *s;
  TCase *tc_core;
  s = suite_create("cos(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_cos_test_1);
  tcase_add_test(tc_core, s21_cos_test_2);
  tcase_add_test(tc_core, s21_cos_test_3);
  tcase_add_test(tc_core, s21_cos_test_4);
  tcase_add_test(tc_core, s21_cos_test_5);
  tcase_add_test(tc_core, s21_cos_test_6);
  tcase_add_test(tc_core, s21_cos_test_7);
  tcase_add_test(tc_core, s21_cos_test_8);
  tcase_add_test(tc_core, s21_cos_test_9);
  tcase_add_test(tc_core, s21_cos_test_10);
  tcase_add_test(tc_core, s21_cos_test_11);
  tcase_add_test(tc_core, s21_cos_test_12);
  suite_add_tcase(s, tc_core);
  return s;
}
