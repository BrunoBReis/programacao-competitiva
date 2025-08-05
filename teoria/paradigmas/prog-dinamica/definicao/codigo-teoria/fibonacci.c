#include <stdio.h>

int F(int n) {
  return n <= 1 ? n : F(n - 1) + F(n - 2);
}

int main(void) {
  int v;
  scanf("%d", &v);
  printf("%d\n", F(v));
}
