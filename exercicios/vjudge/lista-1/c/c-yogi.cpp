#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;

  long long n = s.size() - 1, ans = 0;

  for (int i = 0; i < (1 << n); i++) {
    long long start = 0;
    for (int j = 0; j < n; j++) {
      if (i & (1 << j)) {
        ans += stoll(s.substr(start, (j + 1) - start));
        start = j + 1;
      }
    }
    ans += stoll(s.substr(start, n - start + 1));
  }

  cout << ans << '\n';

  return 0;
}