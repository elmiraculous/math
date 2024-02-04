#include "s21_math.h"
long double s21_pow(double base, double exp) {
  long double result = 0;
  int sign = 1;
  if (!exp) {
    result = 1;
  } else if (exp == S21_INF_POS && (s21_fabs(base) < 1)) {
    result = 0;
  } else if (exp == S21_INF_POS && s21_fabs(base) > 1) {
    result = S21_INF_POS;
  } else if (exp == S21_INF_POS && base == -1) {
    result = 1.f;
  } else if (exp == S21_INF_NEG && s21_fabs(base) < 1) {
    result = S21_INF_POS;
  } else if (exp == S21_INF_NEG && s21_fabs(base) > 1) {
    result = 0.f;
  } else if (exp == S21_INF_NEG && base == -1) {
    result = 1.f;
  } else if (base == S21_INF_POS && exp < 0) {
    result = 0.f;
  } else if (base == S21_INF_POS && exp > 0) {
    result = S21_INF_POS;
  } else if (base == S21_INF_NEG && exp < 0 && s21_fmod(exp, 2) != 0) {
    result = 0.f;
  } else if (base == S21_INF_NEG && exp < 0 && s21_fmod(exp, 2) == 0) {
    result = 0.f;
  } else if (base == S21_INF_NEG && exp > 0 &&
             (s21_fmod(exp, 2) == 0 || (long long int)exp != exp)) {
    result = S21_INF_POS;
  } else if (base == S21_INF_NEG && exp > 0 && s21_fmod(exp, 2) == 1) {
    result = -S21_INF_POS;
  } else if (base == S21_INF_NEG && exp == S21_INF_NEG) {
    result = 0;
  } else if (base == S21_INF_NEG && exp == S21_INF_POS) {
    result = S21_INF_POS;
  } else if (base < 0 && exp != (long long int)exp && !S21_IS_INF(exp) &&
             !S21_IS_NEG_INF(exp)) {
    result = S21_NAN;
  } else {
    sign = base > 0 ? 1 : -1;
    result = s21_exp(exp * s21_log(base * sign));
    if (s21_fmod(exp, 2)) {
      result *= sign;
    }
  }
  return result;
}