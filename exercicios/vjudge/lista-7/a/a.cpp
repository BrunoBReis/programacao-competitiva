#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, A;
  cin >> N >> A;

  vector<int> x(N);
  int max_sum = 0;
  for (int i = 0; i < N; ++i) {
    cin >> x[i];
    max_sum += x[i];
  }

  vector<vector<long long>> dp(N + 1, vector<long long> (N * 50 + 1, 0));

  for (int card : x)
    for (int j = N; j >= 1; --j)
      for (int s = N * 50; s >= card; --s)
        dp[j][s] += dp[j - 1][s - card];

  return 0;
}
