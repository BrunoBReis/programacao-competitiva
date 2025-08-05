#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> N {5, 5, 7};
  int S[3];
  cin >> S[0] >> S[1] >> S[2];

  int count = 0;

  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < N.size(); ++j) {
      if (N[j] == -1) continue;
      if (S[i] == N[j]) {
        count++;
        N[j] = -1;
        break;
      }
    }
  }
  
  cout << ((count == 3) ? "YES" : "NO") << "\n";

  return 0;
}
