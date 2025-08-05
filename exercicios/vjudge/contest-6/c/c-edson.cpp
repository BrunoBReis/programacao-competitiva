#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;

  vector<int> xs((2 * N) + 1);
  iota(xs.begin(), xs.end(), 1);

  set<int> s(xs.begin(), xs.end());

  while (true) {
    cout << *s.begin() << '\n';
    cout.flush();

    s.erase(s.begin());

    int x;
    cin >> x;
    if (x == 0) break;

    s.erase(x);
    cout.flush();
  }

  return 0;
}