#include "s21_math.h"

long double s21_floor(double x) {
  long double res = (long long int)x;
  if (x != x) {
    return S21_NAN;
  } else if (S21_IS_INF(x)) {
    return S21_INF_POS;
  } else if (x == S21_INF_NEG) {
    return S21_INF_NEG;
  } else if (x < 0 && x != res) {
    res -= 1;
  }
  return res;
}
