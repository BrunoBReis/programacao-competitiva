#include <bits/stdc++.h>

using namespace std;

const int INFITNITY = INT_MAX;

int LIS(int N, const vector<int>& as) {
  vector<int> lis(N + 1, INFINITY);
  lis[0] = -INFINITY;

  auto ans = 0;
  for (int i = 0; i < N; ++i) {
    auto it = lower_bound(lis.begin(), lis.end(), as[i]);
    auto pos = (int) (it - lis.begin());

    ans = max(ans, pos);
    lis[pos] = as[i];
  }
  return ans;
}


int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;

  vector<int> L(N);
  for (int i = 0; i < N; ++i)
    cin >> L[i];

  
  return 0;
}