#include "s21_math.h"

long double s21_sqrt(double x) {
  if (x != x || x == S21_INF_NEG || x < 0) return S21_NAN;
  if (x == S21_INF_POS || x == 0) return (long double)x;
  long double tmp;
  long double root = x / 2;
  do {
    tmp = root;
    root = (tmp + (x / tmp)) / 2;
  } while ((tmp - root) != 0);
  return root;
}
