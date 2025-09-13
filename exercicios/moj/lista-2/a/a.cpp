#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, K; cin >> N >> K;
  vector<int> A(N);
  for (auto &a : A)
    cin >> a;

  sort(A.rbegin(), A.rend());

  cout << A[K - 1] << '\n';

  return 0;
}
