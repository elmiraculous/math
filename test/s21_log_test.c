#include <check.h>

#include "../src/s21_math.h"

START_TEST(s21_log_test_1) {
  long double value = 4324.89;
  ck_assert_ldouble_eq_tol(s21_log(value), log(value), S21_EPS);
}
END_TEST

START_TEST(s21_log_test_2) {
  long double value = S21_NAN;
  ck_assert_ldouble_nan(s21_log(value));
}
END_TEST

START_TEST(s21_log_test_3) {
  long double value = 0.00001;
  ck_assert_ldouble_eq_tol(s21_log(value), log(value), S21_EPS);
}
END_TEST

START_TEST(s21_log_test_4) {
  long double value = S21_INF_POS;
  ck_assert_ldouble_infinite(s21_log(value));
}
END_TEST

START_TEST(s21_log_test_5) {
  long double value = -S21_INF_POS;
  ck_assert_ldouble_nan(s21_log(value));
}
END_TEST

START_TEST(s21_log_test_6) {
  long double value = 1.0;
  ck_assert_ldouble_eq_tol(s21_log(value), log(value), S21_EPS);
}
END_TEST

START_TEST(s21_log_test_7) {
  long double value = 1.1;
  ck_assert_ldouble_eq_tol(s21_log(value), log(value), S21_EPS);
}
END_TEST

START_TEST(s21_log_test_8) {
  long double value = 0.23453435345;
  ck_assert_ldouble_eq_tol(s21_log(value), log(value), S21_EPS);
}
END_TEST

START_TEST(s21_log_test_9) {
  long double value = 1;
  ck_assert_ldouble_eq_tol(s21_log(value), log(value), S21_EPS);
}
END_TEST

START_TEST(s21_log_test_10) {
  long double value = (S21_PI / 3);
  ck_assert_ldouble_eq_tol(s21_log(value), log(value), S21_EPS);
}
END_TEST

START_TEST(s21_log_test_11) {
  long double value = 9.234578353457e-6;
  ck_assert_ldouble_eq_tol(s21_log(value), log(value), S21_EPS);
}
END_TEST

START_TEST(s21_log_test_12) {
  long double value = 9.234578353457e6;
  ck_assert_ldouble_eq_tol(s21_log(value), log(value), S21_EPS);
}
END_TEST

START_TEST(s21_log_test_13) {
  long double value = 34325339.234500053457;
  ck_assert_ldouble_eq_tol(s21_log(value), log(value), S21_EPS);
}
END_TEST

START_TEST(s21_log_test_14) {
  long double value = 1.1e-16;
  ck_assert_ldouble_eq_tol(s21_log(value), log(value), S21_EPS);
}
END_TEST

START_TEST(s21_log_test_15) {
  long double value = 3.14545e-16;
  ck_assert_ldouble_eq_tol(s21_log(value), log(value), S21_EPS);
}
END_TEST

START_TEST(s21_log_test_16) {
  long double value = 3.14545e-20;
  ck_assert_ldouble_eq_tol(s21_log(value), log(value), S21_EPS);
}
END_TEST

START_TEST(s21_log_test_17) {
  long double value = 565643.14545e-5;
  ck_assert_ldouble_eq_tol(s21_log(value), log(value), S21_EPS);
}
END_TEST

START_TEST(s21_log_test_18) {
  long double value = -1.1;
  ck_assert_ldouble_nan(s21_log(value));
}
END_TEST

START_TEST(s21_log_test_19) {
  long double value = -0;
  ck_assert_ldouble_infinite(s21_log(value));
}
END_TEST

Suite *log_suite() {
  Suite *s;
  TCase *tc_core;
  s = suite_create("log(x)");

  tc_core = tcase_create("core");

  tcase_add_test(tc_core, s21_log_test_1);
  tcase_add_test(tc_core, s21_log_test_2);
  tcase_add_test(tc_core, s21_log_test_3);
  tcase_add_test(tc_core, s21_log_test_4);
  tcase_add_test(tc_core, s21_log_test_5);
  tcase_add_test(tc_core, s21_log_test_6);
  tcase_add_test(tc_core, s21_log_test_7);
  tcase_add_test(tc_core, s21_log_test_8);
  tcase_add_test(tc_core, s21_log_test_9);
  tcase_add_test(tc_core, s21_log_test_10);
  tcase_add_test(tc_core, s21_log_test_11);
  tcase_add_test(tc_core, s21_log_test_12);
  tcase_add_test(tc_core, s21_log_test_13);
  tcase_add_test(tc_core, s21_log_test_14);
  tcase_add_test(tc_core, s21_log_test_15);
  tcase_add_test(tc_core, s21_log_test_16);
  tcase_add_test(tc_core, s21_log_test_17);
  tcase_add_test(tc_core, s21_log_test_18);
  tcase_add_test(tc_core, s21_log_test_19);
  suite_add_tcase(s, tc_core);
  return s;
}