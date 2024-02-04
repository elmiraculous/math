#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double result = 0;
  if (y == 0.0 || S21_IS_INF(x)) {
    result = S21_NAN;
  } else if (S21_IS_INF(y)) {
    result = x;
  } else {
    long int mod = x / y;
    result = (long double)x - mod * (long double)y;
  }
  return result;
}
