#include <stdio.h>
#include <stdlib.h>

char *solve(int curr, int N, char **S) {
  if (curr == 0) S[curr] = "1";
  if (curr + 1 == N) return S[curr];
  else S[curr] = "%s %d %d", S[--curr], curr, S[--curr];
  solve(curr++, N, S);
}

int main(void) {
  int N;
  scanf("%d", &N);

  char **S = malloc(N * sizeof(char*));
  for (int i = 0; i < N; ++i)
    S[i] = malloc(10000 * sizeof(char));

  printf("%s\n", solve(0, N, S));

  return 0;
}