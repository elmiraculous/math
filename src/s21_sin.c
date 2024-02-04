#include "s21_math.h"

long double s21_sin(double x) {
  x = s21_fmod(x, CONST_2PI);
  long double result = x;
  long double summand = x;
  long double xx = x * x;
  int k = 0;
  while (s21_fabs(summand) > S21_EPS) {
    summand *= -xx / ((2 * k + 2) * (2 * k + 3));
    result += summand;
    k++;
  }
  return result;
}