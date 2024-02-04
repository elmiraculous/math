#include <check.h>

#include "../src/s21_math.h"

START_TEST(s21_acos_test_1) {
  long double value = 0;
  ck_assert_ldouble_eq_tol(s21_acos(value), acosl(value), S21_EPS);
}
END_TEST

START_TEST(s21_acos_test_2) {
  long double value = 1;
  ck_assert_ldouble_eq_tol(s21_acos(value), acosl(value), S21_EPS);
}
END_TEST

START_TEST(s21_acos_test_3) {
  long double value = -1;
  ck_assert_ldouble_eq_tol(s21_acos(value), acosl(value), S21_EPS);
}
END_TEST

START_TEST(s21_acos_test_4) {
  long double value = 0.7071067;
  ck_assert_ldouble_eq_tol(s21_acos(value), acosl(value), S21_EPS);
}
END_TEST

START_TEST(s21_acos_test_5) {
  long double value = -0.7071067;
  ck_assert_ldouble_eq_tol(s21_acos(value), acosl(value), S21_EPS);
}
END_TEST

START_TEST(s21_acos_test_6) {
  long double value = 0.5;
  ck_assert_ldouble_eq_tol(s21_acos(value), acosl(value), S21_EPS);
}
END_TEST

START_TEST(s21_acos_test_7) {
  long double value = -0.5;

  ck_assert_ldouble_eq_tol(s21_acos(value), acosl(value), S21_EPS);
}
END_TEST

START_TEST(s21_acos_test_8) {
  long double value = 0.8660254;
  ck_assert_ldouble_eq_tol(s21_acos(value), acosl(value), S21_EPS);
}
END_TEST

START_TEST(s21_acos_test_9) {
  long double value = -0.8660254;
  ck_assert_ldouble_eq_tol(s21_acos(value), acosl(value), S21_EPS);
}
END_TEST

START_TEST(s21_acos_test_10) {
  long double value = S21_INF_POS;
  ck_assert_ldouble_nan(s21_acos(value));
}
END_TEST

START_TEST(s21_acos_test_11) {
  long double value = S21_NAN;
  ck_assert_ldouble_nan(s21_acos(value));
}
END_TEST

START_TEST(s21_acos_test_12) {
  long double value = +0;
  ck_assert_ldouble_eq_tol(s21_acos(value), acosl(value), S21_EPS);
}
END_TEST
START_TEST(s21_acos_test_13) {
  long double value = -0;
  ck_assert_ldouble_eq_tol(s21_acos(value), acosl(value), S21_EPS);
}
END_TEST

START_TEST(s21_acos_test_14) {
  long double value = 423;
  ck_assert_ldouble_nan(s21_acos(value));
}
END_TEST

START_TEST(s21_acos_test_15) {
  long double value = -423.453;
  ck_assert_ldouble_nan(s21_acos(value));
}
END_TEST

Suite *acos_suite() {
  Suite *s;
  TCase *tc_core;
  s = suite_create("acos(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_acos_test_1);
  tcase_add_test(tc_core, s21_acos_test_2);
  tcase_add_test(tc_core, s21_acos_test_3);
  tcase_add_test(tc_core, s21_acos_test_4);
  tcase_add_test(tc_core, s21_acos_test_5);
  tcase_add_test(tc_core, s21_acos_test_6);
  tcase_add_test(tc_core, s21_acos_test_7);
  tcase_add_test(tc_core, s21_acos_test_8);
  tcase_add_test(tc_core, s21_acos_test_9);
  tcase_add_test(tc_core, s21_acos_test_10);
  tcase_add_test(tc_core, s21_acos_test_11);
  tcase_add_test(tc_core, s21_acos_test_12);
  tcase_add_test(tc_core, s21_acos_test_13);
  tcase_add_test(tc_core, s21_acos_test_14);
  tcase_add_test(tc_core, s21_acos_test_15);
  suite_add_tcase(s, tc_core);
  return s;
}
