#include "s21_math.h"
long double s21_atan(double x) {
  long double summand = x;
  long double result = x;
  int n = 1;
  int sign = x > 0 ? 1 : -1;
  long double xx = x * x;
  if (x == S21_INF_POS) {
    result = S21_PI / 2;
  }
  if (x == -S21_INF_POS) {
    result = -S21_PI / 2;
  }
  if (x == 0) {
    result = 0;
  }
  if (s21_fabs(x) == 1) {
    result = sign * S21_PI / 4;
  }
  if (s21_fabs(x) < 1) {
    while (s21_fabs(summand) > S21_EPS && n < S21_MAX_ITER_COUNT) {
      summand *= -xx;
      result += summand / (2 * n + 1);
      n++;
    }
  } else if (s21_fabs(x) > 1) {
    summand = 1 / x;
    result = 1 / x;
    while (s21_fabs(summand) > S21_EPS && n < S21_MAX_ITER_COUNT) {
      summand *= -1 / xx;
      result += summand / (2 * n + 1);
      n++;
    }
    result = sign * S21_PI_DIVIDED_BY_2 - result;
  }
  return result;
}
