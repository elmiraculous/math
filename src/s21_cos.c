#include "s21_math.h"

long double s21_cos(double x) {
  long double result = 0;
  if (x == S21_INF_POS) {
    result = S21_NAN;
  } else {
    result = s21_sin(S21_PI / 2 - x);
  }
  return result;
}
