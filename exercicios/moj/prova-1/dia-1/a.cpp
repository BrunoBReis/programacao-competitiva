#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int R, N, count = 0;
  cin >> N >> R;

  vector<int> G;

  for (int i = 0; i < N; i++) {
    int k;
    cin >> k;
    G.push_back(k);
  }

  sort(G.begin(), G.end());

  for (auto x: G) {
    if (x <= R) {
      R -= x;
      count++;
    }
  }

  cout << count << endl;

  return 0;
}