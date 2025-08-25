#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int Pe, Ce, Pd, Cd; cin >> Pe >> Ce >> Pd >> Cd;
  int E = Pe * Ce, D = Pd * Cd;
  if (E > D)
    cout << -1;
  else if (D > E)
    cout << 1;
  else
    cout << 0;
  cout << '\n';


  return 0;
}
