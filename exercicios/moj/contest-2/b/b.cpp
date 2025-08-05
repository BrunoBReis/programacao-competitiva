#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  unordered_set<int> D;
  for (int i = 0; i < 6; ++i) {
    int tmp;
    cin >> tmp;
    D.insert(tmp);
  }

  int N;
  cin >> N;

  int sen = 0, qui = 0, qua = 0;
  
  for (int i = 0; i < N; ++i) {
    int M;
    cin >> M;
    int cnt = 0;
    for (int j = 0; j < M; ++j) {
      int tmp;
      cin >> tmp;
      if (D.count(tmp))
        cnt++;
    }
    switch (cnt) {
      case 4:
        qua++;
        break;
      case 5:
        qui++;
        break;
      case 6:
        sen++;
        break;
    }
  }

  cout << sen << ' ' << qui << ' ' << qua << '\n';

  return 0;
}