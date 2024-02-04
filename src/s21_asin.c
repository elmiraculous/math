#include "s21_math.h"

long double s21_asin(double x) {
  long double xx = x * x;
  long double den = s21_sqrt(1 - xx);
  long double result = 0;
  int sign = x >= 0 ? 1 : -1;
  if (s21_fabs(x) != 1) {
    result = s21_atan(x / den);
  } else if (s21_fabs(x) > 1) {
    result = S21_NAN;
  } else {
    result = sign * S21_PI / 2;
  }
  return result;
}
