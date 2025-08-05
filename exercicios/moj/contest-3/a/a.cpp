#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, D;
  cin >> n >> D;

  D *= 8;

  vector<int> N;
  int tmp;
  while (cin >> tmp)
    N.push_back(tmp);

  int cnt = 0;
  sort(N.begin(), N.end());
  for (int i = 0; i < n; ++i) {
    if (!D) break;
    if (N[i] <= D)
      cnt++, D -= N[i];
  }

  cout << cnt << '\n';


  return 0;
}