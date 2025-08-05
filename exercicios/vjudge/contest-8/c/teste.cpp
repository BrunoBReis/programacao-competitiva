#include <bits/stdc++.h>

using namespace std;

string solve(int curr, int N, vector<string>&S) {
  if (curr == 0) S[curr] = curr;
  if (curr + 1 == N) return S[curr];
  solve(curr++, N, S);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N = 2;
  vector<string> S(N);

  cout << solve(0, N, S) << '\n';

  return 0;
}