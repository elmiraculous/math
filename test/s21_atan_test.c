#include <check.h>

#include "../src/s21_math.h"

START_TEST(s21_atan_test_1) {
  long double value = 0;
  ck_assert_ldouble_eq_tol(s21_atan(value), atanl(value), S21_EPS);
}
END_TEST

START_TEST(s21_atan_test_2) {
  long double value = 1;
  ck_assert_ldouble_eq_tol(s21_atan(value), atanl(value), S21_EPS);
}
END_TEST

START_TEST(s21_atan_test_3) {
  long double value = 0.7071067;
  ck_assert_ldouble_eq_tol(s21_atan(value), atanl(value), S21_EPS);
}
END_TEST

START_TEST(s21_atan_test_4) {
  long double value = -0.7071067;
  ck_assert_ldouble_eq_tol(s21_atan(value), atanl(value), S21_EPS);
}
END_TEST

START_TEST(s21_atan_test_5) {
  long double value = 0.5;
  ck_assert_ldouble_eq_tol(s21_atan(value), atanl(value), S21_EPS);
}
END_TEST

START_TEST(s21_atan_test_6) {
  long double value = -0.5;
  ck_assert_ldouble_eq_tol(s21_atan(value), atanl(value), S21_EPS);
}
END_TEST

START_TEST(s21_atan_test_7) {
  long double value = 0.8660254;
  ck_assert_ldouble_eq_tol(s21_atan(value), atanl(value), S21_EPS);
}
END_TEST

START_TEST(s21_atan_test_8) {
  long double value = -0.8660254;
  ck_assert_ldouble_eq_tol(s21_atan(value), atanl(value), S21_EPS);
}
END_TEST

START_TEST(s21_atan_test_9) {
  long double value = S21_INF_POS;
  ck_assert_ldouble_eq_tol(s21_atan(value), atanl(value), S21_EPS);
}
END_TEST

START_TEST(s21_atan_test_10) {
  long double value = S21_NAN;
  ck_assert_ldouble_nan(s21_atan(value));
}
END_TEST

START_TEST(s21_atan_test_11) {
  long double value = -1;
  ck_assert_ldouble_eq_tol(s21_atan(value), atanl(value), S21_EPS);
}
END_TEST

START_TEST(s21_atan_test_12) {
  long double value = 153;
  ck_assert_ldouble_eq_tol(s21_atan(value), atanl(value), S21_EPS);
}
END_TEST

START_TEST(s21_atan_test_13) {
  long double value = -153.565;
  ck_assert_ldouble_eq_tol(s21_atan(value), atanl(value), S21_EPS);
}
END_TEST

Suite *atan_suite() {
  Suite *s;
  TCase *tc_core;
  s = suite_create("atan(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_atan_test_1);
  tcase_add_test(tc_core, s21_atan_test_2);
  tcase_add_test(tc_core, s21_atan_test_3);
  tcase_add_test(tc_core, s21_atan_test_4);
  tcase_add_test(tc_core, s21_atan_test_5);
  tcase_add_test(tc_core, s21_atan_test_6);
  tcase_add_test(tc_core, s21_atan_test_7);
  tcase_add_test(tc_core, s21_atan_test_8);
  tcase_add_test(tc_core, s21_atan_test_9);
  tcase_add_test(tc_core, s21_atan_test_10);
  tcase_add_test(tc_core, s21_atan_test_11);
  tcase_add_test(tc_core, s21_atan_test_12);
  tcase_add_test(tc_core, s21_atan_test_13);
  suite_add_tcase(s, tc_core);
  return s;
}
