#include <check.h>

#include "../src/s21_math.h"
START_TEST(s21_fmod_test_1) {
  long double numerator = 0;
  long double denominator = 6;
  ck_assert_ldouble_eq_tol(s21_fmod(numerator, denominator),
                           fmodl(numerator, denominator), S21_EPS);
}
END_TEST

START_TEST(s21_fmod_test_2) {
  long double numerator = S21_INF_POS;
  long double denominator = 3;
  ck_assert_ldouble_nan(s21_fmod(numerator, denominator));
}
END_TEST

START_TEST(s21_fmod_test_3) {
  long double numerator = S21_INF_POS;
  long double denominator = -3;
  ck_assert_ldouble_nan(fmodl(numerator, denominator));
}
END_TEST

START_TEST(s21_fmod_test_4) {
  long double numerator = 32.9;
  long double denominator = S21_INF_POS;
  ck_assert_ldouble_eq_tol(s21_fmod(numerator, denominator),
                           fmodl(numerator, denominator), S21_EPS);
}
END_TEST

START_TEST(s21_fmod_test_5) {
  long double numerator = 32.9;
  long double denominator = 3.7;
  ck_assert_ldouble_eq_tol(s21_fmod(numerator, denominator),
                           fmodl(numerator, denominator), S21_EPS);
}
END_TEST

START_TEST(s21_fmod_test_6) {
  long double numerator = 12345.12;
  long double denominator = 345.8;
  ck_assert_ldouble_eq_tol(s21_fmod(numerator, denominator),
                           fmodl(numerator, denominator), S21_EPS);
}
END_TEST

START_TEST(s21_fmod_test_7) {
  long double numerator = 1234.56;
  long double denominator = 0;
  ck_assert_ldouble_nan(s21_fmod(numerator, denominator));
}
END_TEST

Suite *fmod_suite() {
  Suite *s;
  TCase *tc_core;
  s = suite_create("fmod(x, y)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_fmod_test_1);
  tcase_add_test(tc_core, s21_fmod_test_2);
  tcase_add_test(tc_core, s21_fmod_test_3);
  tcase_add_test(tc_core, s21_fmod_test_4);
  tcase_add_test(tc_core, s21_fmod_test_5);
  tcase_add_test(tc_core, s21_fmod_test_6);
  tcase_add_test(tc_core, s21_fmod_test_7);
  suite_add_tcase(s, tc_core);
  return s;
}
