#include <check.h>

#include "../src/s21_math.h"

START_TEST(s21_exp_test_1) {
  long double value = 6;
  ck_assert_ldouble_eq_tol(s21_exp(value), exp(value), S21_EPS);
}

END_TEST

START_TEST(s21_exp_test_2) {
  long double value = -124.43;
  ck_assert_ldouble_eq_tol(s21_exp(value), expl(value), S21_EPS);
}
END_TEST

START_TEST(s21_exp_test_3) {
  long double value = S21_INF_POS;
  ck_assert_ldouble_eq(s21_exp(value), expl(value));
}
END_TEST

START_TEST(s21_exp_test_4) {
  long double value = 0;
  ck_assert_ldouble_eq_tol(s21_exp(value), expl(value), S21_EPS);
}
END_TEST

START_TEST(s21_exp_test_5) {
  long double value = 1;
  ck_assert_ldouble_eq_tol(s21_exp(value), expl(value), S21_EPS);
}
END_TEST

START_TEST(s21_exp_test_6) {
  long double value = -1;
  ck_assert_ldouble_eq_tol(s21_exp(value), expl(value), S21_EPS);
}
END_TEST

START_TEST(s21_exp_test_7) {
  long double value = S21_NAN;
  ck_assert_ldouble_nan(s21_exp(value));
  ck_assert_ldouble_nan(exp(value));
}
END_TEST

START_TEST(s21_exp_test_8) {
  long double value = 20;
  ck_assert_ldouble_eq_tol(s21_exp(value), exp(value), S21_EPS);
}
END_TEST

START_TEST(s21_exp_test_9) {
  long double value = S21_INF_NEG;
  ck_assert_ldouble_eq(s21_exp(value), expl(value));
}
END_TEST

START_TEST(s21_exp_test_10) {
  long double value = 12.2;
  ck_assert_ldouble_eq_tol(s21_exp(value), expl(value), S21_EPS);
}
END_TEST

Suite *exp_suite() {
  Suite *s;
  TCase *tc_core;
  s = suite_create("exp(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_exp_test_1);
  tcase_add_test(tc_core, s21_exp_test_2);
  tcase_add_test(tc_core, s21_exp_test_3);
  tcase_add_test(tc_core, s21_exp_test_4);
  tcase_add_test(tc_core, s21_exp_test_5);
  tcase_add_test(tc_core, s21_exp_test_6);
  tcase_add_test(tc_core, s21_exp_test_7);
  tcase_add_test(tc_core, s21_exp_test_8);
  tcase_add_test(tc_core, s21_exp_test_9);
  tcase_add_test(tc_core, s21_exp_test_10);
  suite_add_tcase(s, tc_core);
  return s;
}
