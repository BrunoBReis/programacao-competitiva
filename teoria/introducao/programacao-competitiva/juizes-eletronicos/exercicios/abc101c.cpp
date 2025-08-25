#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, K; cin >> N >> K;

  long long ans = (N - 1 + K - 2) / (K - 1);
  
  cout << ans << '\n';

  return 0;
}
