#include <check.h>

#include "../src/s21_math.h"

START_TEST(s21_fabs_test1) {
  double value = 0.000001;
  ck_assert_ldouble_eq(s21_fabs(value), fabs(value));
}
END_TEST

START_TEST(s21_fabs_test2) {
  double value = -56.008001;
  ck_assert_ldouble_eq(s21_fabs(value), fabs(value));
}
END_TEST

START_TEST(s21_fabs_test3) {
  double value = 12345678.1234;
  ck_assert_ldouble_eq(s21_fabs(value), fabs(value));
}
END_TEST

START_TEST(s21_fabs_test4) {
  double value = -123342.1234;
  ck_assert_ldouble_eq(s21_fabs(value), fabs(value));
}
END_TEST

START_TEST(s21_fabs_test5) {
  double value = -5.53151413431;
  ck_assert_ldouble_eq(s21_fabs(value), fabs(value));
}
END_TEST

START_TEST(s21_fabs_test6) {
  double value = S21_NAN;
  ck_assert_ldouble_nan(s21_fabs(value));
}
END_TEST

START_TEST(s21_fabs_test7) {
  double value = S21_INF_POS;
  ck_assert_ldouble_infinite(s21_fabs(value));
}
END_TEST

START_TEST(s21_fabs_test8) {
  double value = -9519359135915.53151413431;
  ck_assert_ldouble_eq_tol(s21_fabs(value), fabs(value), S21_EPS);
}
END_TEST

START_TEST(s21_fabs_test9) {
  double value = +0;
  ck_assert_ldouble_eq(s21_fabs(value), fabs(value));
}
END_TEST
START_TEST(s21_fabs_test10) {
  double value = -0;
  ck_assert_ldouble_eq(s21_fabs(value), fabs(value));
}
END_TEST

START_TEST(s21_fabs_test11) {
  double value = 21.21;
  ck_assert_ldouble_eq(s21_fabs(value), fabs(value));
}
END_TEST

START_TEST(s21_fabs_test12) {
  double value = S21_INF_POS;
  ck_assert_ldouble_eq(s21_fabs(value), fabs(value));
}
END_TEST

START_TEST(s21_fabs_test13) {
  double value = -S21_INF_POS;
  ck_assert_ldouble_eq(s21_fabs(value), fabs(value));
}
END_TEST

Suite *fabs_suite() {
  Suite *s;
  TCase *tc_core;
  s = suite_create("fabs(x)");

  tc_core = tcase_create("core");

  tcase_add_test(tc_core, s21_fabs_test1);
  tcase_add_test(tc_core, s21_fabs_test2);
  tcase_add_test(tc_core, s21_fabs_test3);
  tcase_add_test(tc_core, s21_fabs_test4);
  tcase_add_test(tc_core, s21_fabs_test5);
  tcase_add_test(tc_core, s21_fabs_test6);
  tcase_add_test(tc_core, s21_fabs_test7);
  tcase_add_test(tc_core, s21_fabs_test8);
  tcase_add_test(tc_core, s21_fabs_test9);
  tcase_add_test(tc_core, s21_fabs_test10);
  tcase_add_test(tc_core, s21_fabs_test11);
  tcase_add_test(tc_core, s21_fabs_test12);
  tcase_add_test(tc_core, s21_fabs_test13);

  suite_add_tcase(s, tc_core);
  return s;
}