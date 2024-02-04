#ifndef C4_S21_MATH_2_SRC_S21_MATH_H_
#define C4_S21_MATH_2_SRC_S21_MATH_H_

#include <stdio.h>
#include <stdlib.h>

#define S21_TAN_PI_2_RESULT (16331239353195369.755859) /* tanl(pi/2) */
#define S21_PI (3.141592653589793238462643383279)
#define S21_E (2.71828182845904523536028747)
#define S21_NAN (0.0 / 0.0)
#define S21_INF_POS ((long double)(1.0 / 0.0))
#define S21_INF_NEG ((long double)(-1.0 / 0.0))
#define S21_EPS (1e-6)
#define S21_MAX_ITER_COUNT (500000)
#define CONST_PI S21_PI
#define CONST_2PI (2 * S21_PI)
#define S21_PI_DIVIDED_BY_2 (1.57079632679489661923132169163975144) /* pi/2 */
#define S21_IS_INF(x) ((x == S21_INF_POS) ? 1 : 0)
#define S21_LN2 (0.693147180559945309417232)
#define S21_IS_NEG_INF(x) ((x == -S21_INF_POS) ? 1 : 0)

#define S21_FLT_MAX (3.402823466e+38F)
#define S21_FLT_MIN (1.175494351e-38F)

int s21_abs(int x);
long double s21_fabs(double x);
long double s21_fmod(double x, double y);
long double s21_sin(double x);
long double s21_cos(double x);
long double s21_tan(double x);
long double s21_atan(double x);
long double s21_asin(double x);
long double s21_acos(double x);
long double s21_exp(double x);
long double s21_ceil(double x);
long double s21_floor(double x);
long double s21_log(double x);
long double s21_sqrt(double x);
long double s21_pow(double base, double exp);

#endif  // C4_S21_MATH_2_SRC_S21_MATH_H_
