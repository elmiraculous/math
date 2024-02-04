#include "s21_math.h"

long double s21_acos(double x) {
  long double result = 0;
  if (x == 0) {
    result = S21_PI / 2;
  } else if (s21_fabs(x) > 1) {
    result = S21_NAN;

  } else if (x != x) {
    result = x;
  } else {
    long double val = (s21_sqrt(1 - x * x)) / x;
    if (x > 0 && x <= 1) {
      result = s21_atan(val);
    }
    if (x < 0 && x >= -1) {
      result = S21_PI + s21_atan(val);
    }
  }
  return result;
}
