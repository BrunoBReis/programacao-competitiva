#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, S; cin >> N >> S;  
  int min = __INT_MAX__;
  while (N--) {
    int curr; cin >> curr;
    S += curr;
    if (S <= min) min = S;
  }

  cout << min << '\n';

  return 0;
}
