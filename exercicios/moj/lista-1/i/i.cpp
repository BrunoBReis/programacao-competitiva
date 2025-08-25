#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int cnt = 0;

  for (int i = 0; i < 6; ++i) {
    char c; cin >> c;
    if (toupper(c) == 'V') cnt++;
  }

  int ans; 
  if (cnt == 0) ans = -1;
  else if (cnt <= 2) ans = 3;
  else if (cnt <= 4) ans = 2;
  else ans = 1;

  cout << ans << '\n';

  return 0;
}
