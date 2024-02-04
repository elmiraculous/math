#include "../src/s21_math.h"
#include "math.h"
#include "stdio.h"

int main() {
  long double value1 = 450;
  //  long double value2 = 3;
  long double result_mine = s21_exp(value1);
  long double result_orig = expl(value1);
  // printf("[%20.10Lf]\n", result_orig -result_mine);
  fprintf(stderr, "result_mine: [%20.10Lf]\n", result_mine);
  fprintf(stderr, "result_orig: [%20.10Lf]\n", result_orig);

  return 0;
}