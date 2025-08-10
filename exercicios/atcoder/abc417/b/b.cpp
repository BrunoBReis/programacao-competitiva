#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, M;
  cin >> N >> M;

  vector<int> S(N);

  for (int i = 0; i < N; ++i)
    cin >> S[i];
  
  for (int i = 0; i < M; ++i) {
    int tmp; cin >> tmp;
    for (int j = 0; j < N; ++j)
      if (tmp == S[j]) {
        S[j] = -1;
        break;
      }
  }

  int cnt = 0;
  for (int i = 0; i < N; ++i) {
    if (S[i] == -1) {
      cnt++;
      continue;
    }
    cout << S[i] << ' ';
  }

  if (cnt == N)
    exit(EXIT_SUCCESS);
  cout << '\n';


  return 0;
}