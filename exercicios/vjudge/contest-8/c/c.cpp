#include <bits/stdc++.h>

using namespace std;

string solve(int curr, int N, vector<string>&S) {
  if (curr == 0) S[curr] = "1 ";
  else S[curr] = S.at(curr - 1) + to_string(curr) + " " + S.at(curr - 1);
  if (curr + 1 == N) return S[curr];
  else solve(curr++, N, S);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  // 1, 3, 7, 15

  int N;
  cin >> N;
  vector<string>S(N);
  cout << solve(0, N, S) << '\n';

  return 0;
}