#include <check.h>

#include "../src/s21_math.h"

START_TEST(s21_abs_test1) {
  int value = 10;
  ck_assert_int_eq(s21_abs(value), abs(value));
}
END_TEST

START_TEST(s21_abs_test2) {
  int value = -10;
  ck_assert_int_eq(s21_abs(value), abs(value));
}
END_TEST

START_TEST(s21_abs_test3) {
  int value = (int)S21_INF_POS;
  ck_assert_int_eq(s21_abs(value), abs(value));
}
END_TEST

START_TEST(s21_abs_test4) {
  int value = (int)S21_NAN;
  ck_assert_int_eq(s21_abs(value), abs(value));
}
END_TEST

START_TEST(s21_abs_test5) {
  int value = (int)-S21_INF_POS;
  ck_assert_int_eq(s21_abs(value), abs(value));
}
END_TEST

START_TEST(s21_abs_test6) {
  int value = -12345678;
  ck_assert_int_eq(s21_abs(value), abs(value));
}
END_TEST

START_TEST(s21_abs_test7) {
  int value = 12345678;
  ck_assert_int_eq(s21_abs(value), abs(value));
}
END_TEST

START_TEST(s21_abs_test8) {
  int value = (int)S21_FLT_MAX;
  ck_assert_int_eq(s21_abs(value), abs(value));
}
END_TEST

START_TEST(s21_abs_test9) {
  int value = (int)S21_FLT_MIN;
  ck_assert_int_eq(s21_abs(value), abs(value));
}
END_TEST

START_TEST(s21_abs_test10) {
  for (int i = -1000; i < 1000; i += 10) {
    ck_assert_int_eq(s21_abs(i), abs(i));
  }
}

END_TEST

START_TEST(s21_abs_test11) {
  int value = +0;
  ck_assert_int_eq(s21_abs(value), abs(value));
}
END_TEST

START_TEST(s21_abs_test12) {
  int value = -0;
  ck_assert_int_eq(s21_abs(value), abs(value));
}
END_TEST

Suite *abs_suite() {
  Suite *s;
  TCase *tc_core;
  s = suite_create("abs(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_abs_test1);
  tcase_add_test(tc_core, s21_abs_test2);
  tcase_add_test(tc_core, s21_abs_test3);
  tcase_add_test(tc_core, s21_abs_test4);
  tcase_add_test(tc_core, s21_abs_test5);
  tcase_add_test(tc_core, s21_abs_test6);
  tcase_add_test(tc_core, s21_abs_test7);
  tcase_add_test(tc_core, s21_abs_test8);
  tcase_add_test(tc_core, s21_abs_test9);
  tcase_add_test(tc_core, s21_abs_test10);
  tcase_add_test(tc_core, s21_abs_test11);
  tcase_add_test(tc_core, s21_abs_test12);
  suite_add_tcase(s, tc_core);
  return s;
}
