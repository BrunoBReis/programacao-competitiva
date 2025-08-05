#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;

  vector<pair<string, int>> Sn(N);

  for (int i = 0; i < N; ++i)
    cin >> Sn[i].first >> Sn[i].second;

  int P;
  cin >> P;

  for (int i = 0; i < P; ++i) {
    pair<string, int> T;
    cin >> T.first >> T.second;
    for (int j = 0; j < N; ++j)
      if (Sn[j].first == T.first && Sn[j].second >= T.second)
        Sn[j].second -= T.second, T.second = 0;
    if (T.second) {
      cout << "Nao\n";
      exit(EXIT_SUCCESS);
    }
  }

  cout << "Sim\n";

  return 0;
}