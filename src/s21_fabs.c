#include "s21_math.h"

long double s21_fabs(double x) {
  if (x != x) {
    return S21_NAN;
  } else if (S21_IS_INF(x)) {
    return S21_INF_POS;
  } else {
    return x > 0 ? (long double)x : (long double)(x *= -1);
  }
}
