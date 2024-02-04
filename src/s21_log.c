#include "s21_math.h"

long double s21_log(double x) {
  long double res = 0;
  if (x != x || x < 0) {
    return S21_NAN;
  } else if (S21_IS_INF(x)) {
    return S21_INF_POS;
  } else if (x == S21_INF_NEG) {
    return S21_NAN;
  } else if (x == 0) {
    return S21_INF_NEG;
  } else {
    long double temp = 0;
    for (int i = 0; i < 100; i++) {
      temp = res;
      res = temp + 2 * ((x - s21_exp(temp)) / (x + s21_exp(temp)));
    }
  }
  return res;
}
