#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> C(3);
  for (int i = 0; i < 3; ++i)
    cin >> C[i];
  sort(C.begin(), C.end());

  if (C[0] == C[2])
    cout << C[0];
  else
    cout << C[1];
  cout << '\n';

  return 0;
}
