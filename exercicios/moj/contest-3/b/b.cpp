#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;
  vector<int> SN(N);

  for (int i = 0; i < N; ++i)
    cin >> SN[i];
    
  if (prev_permutation(SN.begin(), SN.end())) {
    for (int i = 0; i < N; ++i)
      cout << SN[i] << ' ';
    cout << '\n';
  }
  else
    cout << -1 << '\n';

  return 0;
}