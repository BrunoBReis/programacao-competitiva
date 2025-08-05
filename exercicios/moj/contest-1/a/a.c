#include <stdio.h>

double solve(double M, double Ymax) {
  return ((Ymax - (M * Ymax)) / (M + 1));
}

int main(void) {
  double M, Ymax;

  scanf("%lf %lf", &M, &Ymax);
  printf("%.8lf\n", solve(M, Ymax));

  return 0;
}