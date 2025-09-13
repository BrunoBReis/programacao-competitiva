#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N; cin >> N;

  vector<int> Ns(N);
  for (auto &n : Ns)
    cin >> n;

  int cnt = 0;
  int P; cin >> P;
  while (P--) {
    int tmp; cin >> tmp;
    tmp--;
    if (Ns[tmp] != 0) {
      Ns[tmp]--;
      cnt++;
    }
  }

  cout << cnt << '\n';

  return 0;
}
