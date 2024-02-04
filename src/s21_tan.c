#include "s21_math.h"

long double s21_tan(double x) {
  long double result = 0;
  if (x == S21_PI / 2) {
    result = S21_TAN_PI_2_RESULT;
  } else {
    result = s21_sin(x) / s21_cos(x);
  }
  return result;
}
