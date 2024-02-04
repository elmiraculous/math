#include "s21_math.h"

long double calculate_exp(long double x) {
  long double result = 0;
  long double summand = 1;
  for (int i = 1; s21_fabs(summand) > 1e-20 && i < S21_MAX_ITER_COUNT; ++i) {
    result += summand;
    summand *= x / i;
  }
  return result;
}

long double s21_exp(double x) {
  long double result = 1;
  if (x == 0.0) {
    result = 1;
  } else if (x == S21_INF_POS) {
    result = S21_INF_POS;
  } else if (x == -S21_INF_POS) {
    result = 0;
  } else if (x != x) {
    result = x;
  } else {
    if (x > 0) {
      result = calculate_exp(x);
    } else {
      result = 1 / calculate_exp(s21_fabs(x));
    }
  }
  return result;
}