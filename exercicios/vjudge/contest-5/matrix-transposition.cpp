#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(void) {
  ios::sync_with_stdio(false);

  int H, W;
  cin >> H >> W;
  
  vector<vector<int>> a(H, vector<int>(W));

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> a[i][j];
    }
  }
  
  for (int i = 0; i < W; i++) {
    for (int j = 0; j < H; j++) {
      if (j == H - 1) cout << a[j][i];
      else cout << a[j][i] << " ";
    }
    cout << endl;
  }

  return 0;
}