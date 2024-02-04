#include <check.h>

#include "../src/s21_math.h"

START_TEST(s21_pow_test_1) {
  ck_assert_double_eq_tol(s21_pow(20, 0.4), pow(20, 0.4), 0.000001);
}
END_TEST

START_TEST(s21_pow_test_2) {
  ck_assert_double_nan(s21_pow(-20, 0.4));
  ck_assert_double_nan(pow(-20, 0.4));
}
END_TEST

START_TEST(s21_pow_test_3) {
  ck_assert_double_eq(s21_pow(INFINITY, INFINITY), pow(INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_pow_test_4) {
  ck_assert_double_eq(s21_pow(-INFINITY, -INFINITY), pow(-INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test_5) {
  ck_assert_double_nan(s21_pow(NAN, NAN));
  ck_assert_double_nan(pow(NAN, NAN));
}
END_TEST

START_TEST(s21_pow_test_6) {
  ck_assert_double_nan(s21_pow(INFINITY, NAN));
  ck_assert_double_nan(pow(INFINITY, NAN));
}
END_TEST

START_TEST(s21_pow_test_7) {
  ck_assert_double_nan(s21_pow(NAN, INFINITY));
  ck_assert_double_nan(pow(NAN, INFINITY));
}
END_TEST

START_TEST(s21_pow_test_8) {
  ck_assert_double_nan(s21_pow(-INFINITY, NAN));
  ck_assert_double_nan(pow(-INFINITY, NAN));
}
END_TEST

START_TEST(s21_pow_test_9) {
  ck_assert_double_nan(s21_pow(NAN, -INFINITY));
  ck_assert_double_nan(pow(NAN, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test_10) {
  ck_assert_double_eq(s21_pow(-INFINITY, INFINITY), pow(-INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_pow_test_11) {
  ck_assert_double_eq(s21_pow(INFINITY, -INFINITY), pow(INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test_12) {
  ck_assert_double_eq_tol(s21_pow(12.69, 0), pow(12.69, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_test_13) {
  ck_assert_double_eq_tol(s21_pow(-20.63, 3), pow(-20.63, 3), 0.000001);
}
END_TEST

START_TEST(s21_pow_test_14) {
  ck_assert_double_eq_tol(s21_pow(-20.63, 6), pow(-20.63, 6), 0.000001);
}
END_TEST

START_TEST(s21_pow_test_15) {
  ck_assert_double_eq_tol(s21_pow(-INFINITY, 0), pow(-INFINITY, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_test_16) {
  ck_assert_double_eq_tol(s21_pow(INFINITY, 0), pow(INFINITY, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_test_17) {
  ck_assert_double_eq_tol(s21_pow(NAN, 0), pow(NAN, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_test_18) {
  ck_assert_double_eq(s21_pow(0, -INFINITY), pow(0, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test_19) {
  ck_assert_double_eq_tol(s21_pow(0, INFINITY), pow(0, INFINITY), 0.000001);
}
END_TEST

START_TEST(s21_pow_test_20) {
  ck_assert_double_nan(s21_pow(0, NAN));
  ck_assert_double_nan(pow(0, NAN));
}
END_TEST

START_TEST(s21_pow_test_21) { ck_assert_double_eq(s21_pow(0, 0), pow(0, 0)); }
END_TEST

START_TEST(s21_pow_test_22) {
  ck_assert_double_eq(s21_pow(16894.2629, 1545), pow(16894.2629, 1545));
}
END_TEST

START_TEST(s21_pow_test_23) {
  ck_assert_double_eq(s21_pow(16894.2629, -1545), pow(16894.2629, -1545));
}
END_TEST

START_TEST(s21_pow_test_24) {
  ck_assert_double_eq(s21_pow(-16894.2629, 1545), pow(-16894.2629, 1545));
}
END_TEST

START_TEST(s21_pow_test_25) {
  ck_assert_double_eq(s21_pow(-16894.2629, -1545), pow(-16894.2629, -1545));
}
END_TEST

START_TEST(s21_pow_test_26) {
  long double value_x = 0.5;
  long double value_y = -INFINITY;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_27) {
  long double value_x = -0.5;
  long double value_y = -INFINITY;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

// START_TEST(s21_pow_test_28)
// {
// #line 91
// long double value_x = -1.5;
// long double value_y = -INFINITY;
// ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
// }
// END_TEST

START_TEST(s21_pow_test_29) {
  long double value_x = 1.5;
  long double value_y = -INFINITY;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_30) {
  long double value_x = 0.5;
  long double value_y = INFINITY;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_31) {
  long double value_x = -0.5;
  long double value_y = INFINITY;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_32) {
  long double value_x = -1.5;
  long double value_y = INFINITY;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_33) {
  long double value_x = 1.5;
  long double value_y = INFINITY;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_34) {
  long double value_x = -INFINITY;
  long double value_y = 0.5;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_35) {
  long double value_x = -INFINITY;
  long double value_y = -0.5;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_36) {
  long double value_x = -INFINITY;
  long double value_y = -1.5;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_37) {
  long double value_x = -INFINITY;
  long double value_y = 1.5;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_38) {
  long double value_x = INFINITY;
  long double value_y = 0.5;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_39) {
  long double value_x = INFINITY;
  long double value_y = -0.5;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_40) {
  long double value_x = INFINITY;
  long double value_y = -1.5;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_41) {
  long double value_x = INFINITY;
  long double value_y = 1.5;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_42) {
  long double value_x = +0.f;
  long double value_y = 1.5;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_43) {
  long double value_x = -0.f;
  long double value_y = 1.5;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_44) {
  long double value_x = +0.f;
  long double value_y = 0.5;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_45) {
  long double value_x = -0.f;
  long double value_y = 0.5;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_46) {
  long double value_x = +0.f;
  long double value_y = 1;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_47) {
  long double value_x = -0.f;
  long double value_y = -1;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_48) {
  long double value_x = +0.f;
  long double value_y = 2;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_49) {
  long double value_x = -0.f;
  long double value_y = -2;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_50) {
  long double value_x = +12.2f;
  long double value_y = 1.5;
  ck_assert_double_eq_tol(s21_pow(value_x, value_y), pow(value_x, value_y),
                          S21_EPS);
}
END_TEST

START_TEST(s21_pow_test_51) {
  long double value_x = -12.2f;
  long double value_y = 1.5;
  ck_assert_double_nan(s21_pow(value_x, value_y));
  ck_assert_double_nan(pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_52) {
  long double value_x = +12.2f;
  long double value_y = 0.5;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_53) {
  long double value_x = -12.2f;
  long double value_y = 0.5;
  ck_assert_double_nan(s21_pow(value_x, value_y));
  ck_assert_double_nan(pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_54) {
  long double value_x = +12.2f;
  long double value_y = 1;
  ck_assert_double_eq_tol(s21_pow(value_x, value_y), pow(value_x, value_y),
                          S21_EPS);
}
END_TEST

START_TEST(s21_pow_test_55) {
  long double value_x = -12.2f;
  long double value_y = -1;
  ck_assert_double_eq_tol(s21_pow(value_x, value_y), pow(value_x, value_y),
                          S21_EPS);
}
END_TEST

START_TEST(s21_pow_test_56) {
  long double value_x = +12.2f;
  long double value_y = 2;
  ck_assert_double_eq_tol(s21_pow(value_x, value_y), pow(value_x, value_y),
                          S21_EPS);
}
END_TEST

START_TEST(s21_pow_test_57) {
  long double value_x = -12.2f;
  long double value_y = -2;
  ck_assert_double_eq_tol(s21_pow(value_x, value_y), pow(value_x, value_y),
                          S21_EPS);
}
END_TEST

START_TEST(s21_pow_test_58) {
  long double value_x = NAN;
  long double value_y = NAN;
  ck_assert_double_nan(s21_pow(value_x, value_y));
  ck_assert_double_nan(pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_59) {
  long double value_x = NAN;
  long double value_y = 0.f;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_60) {
  long double value_x = 0.f;
  long double value_y = NAN;
  ck_assert_double_nan(s21_pow(value_x, value_y));
  ck_assert_double_nan(pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_61) {
  long double value_x = -1.f;
  long double value_y = -INFINITY;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_62) {
  long double value_x = -INFINITY;
  long double value_y = -2;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_63) {
  long double value_x = -INFINITY;
  long double value_y = 1;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

START_TEST(s21_pow_test_64) {
  long double value_x = -INFINITY;
  long double value_y = -3;
  ck_assert_double_eq(s21_pow(value_x, value_y), pow(value_x, value_y));
}
END_TEST

Suite *pow_suite() {
  Suite *s;
  TCase *tc_core;
  s = suite_create("pow(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_pow_test_1);
  tcase_add_test(tc_core, s21_pow_test_2);
  tcase_add_test(tc_core, s21_pow_test_3);
  tcase_add_test(tc_core, s21_pow_test_4);
  tcase_add_test(tc_core, s21_pow_test_5);
  tcase_add_test(tc_core, s21_pow_test_6);
  tcase_add_test(tc_core, s21_pow_test_7);
  tcase_add_test(tc_core, s21_pow_test_8);
  tcase_add_test(tc_core, s21_pow_test_9);
  tcase_add_test(tc_core, s21_pow_test_10);
  tcase_add_test(tc_core, s21_pow_test_11);
  tcase_add_test(tc_core, s21_pow_test_12);
  tcase_add_test(tc_core, s21_pow_test_13);
  tcase_add_test(tc_core, s21_pow_test_14);
  tcase_add_test(tc_core, s21_pow_test_15);
  tcase_add_test(tc_core, s21_pow_test_16);
  tcase_add_test(tc_core, s21_pow_test_17);
  tcase_add_test(tc_core, s21_pow_test_18);
  tcase_add_test(tc_core, s21_pow_test_19);
  tcase_add_test(tc_core, s21_pow_test_20);
  tcase_add_test(tc_core, s21_pow_test_21);
  tcase_add_test(tc_core, s21_pow_test_22);
  tcase_add_test(tc_core, s21_pow_test_23);
  tcase_add_test(tc_core, s21_pow_test_24);
  tcase_add_test(tc_core, s21_pow_test_25);
  tcase_add_test(tc_core, s21_pow_test_26);
  tcase_add_test(tc_core, s21_pow_test_27);
  // tcase_add_test(tc_core, s21_pow_test_28);
  tcase_add_test(tc_core, s21_pow_test_29);
  tcase_add_test(tc_core, s21_pow_test_30);
  tcase_add_test(tc_core, s21_pow_test_31);
  tcase_add_test(tc_core, s21_pow_test_32);
  tcase_add_test(tc_core, s21_pow_test_33);
  tcase_add_test(tc_core, s21_pow_test_34);
  tcase_add_test(tc_core, s21_pow_test_35);
  tcase_add_test(tc_core, s21_pow_test_36);
  tcase_add_test(tc_core, s21_pow_test_37);
  tcase_add_test(tc_core, s21_pow_test_38);
  tcase_add_test(tc_core, s21_pow_test_39);
  tcase_add_test(tc_core, s21_pow_test_40);
  tcase_add_test(tc_core, s21_pow_test_41);
  tcase_add_test(tc_core, s21_pow_test_42);
  tcase_add_test(tc_core, s21_pow_test_43);
  tcase_add_test(tc_core, s21_pow_test_44);
  tcase_add_test(tc_core, s21_pow_test_45);
  tcase_add_test(tc_core, s21_pow_test_46);
  tcase_add_test(tc_core, s21_pow_test_47);
  tcase_add_test(tc_core, s21_pow_test_48);
  tcase_add_test(tc_core, s21_pow_test_49);
  tcase_add_test(tc_core, s21_pow_test_50);
  tcase_add_test(tc_core, s21_pow_test_51);
  tcase_add_test(tc_core, s21_pow_test_52);
  tcase_add_test(tc_core, s21_pow_test_53);
  tcase_add_test(tc_core, s21_pow_test_54);
  tcase_add_test(tc_core, s21_pow_test_55);
  tcase_add_test(tc_core, s21_pow_test_56);
  tcase_add_test(tc_core, s21_pow_test_57);
  tcase_add_test(tc_core, s21_pow_test_58);
  tcase_add_test(tc_core, s21_pow_test_59);
  tcase_add_test(tc_core, s21_pow_test_60);
  tcase_add_test(tc_core, s21_pow_test_61);
  tcase_add_test(tc_core, s21_pow_test_62);
  tcase_add_test(tc_core, s21_pow_test_63);
  tcase_add_test(tc_core, s21_pow_test_64);
  suite_add_tcase(s, tc_core);
  return s;
}
