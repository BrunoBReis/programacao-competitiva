#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int E, D; cin >> E >> D;
  cout << ((E > D) ? (E + D) : (2 * (D - E))) << '\n';

  return 0;
}
