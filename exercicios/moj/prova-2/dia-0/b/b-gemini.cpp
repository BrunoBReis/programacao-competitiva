#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;

  unordered_map<string, int> Sn(N);

  for (int i = 0; i < N; ++i) {
    pair<string, int> a;
    cin >> a.first >> a.second;
    Sn[a.first] = a.second;
  }

  int P;
  cin >> P;

  for (int i = 0; i < P; ++i) {
    pair<string, int> T;
    cin >> T.first >> T.second;
    if (Sn.count(T.first) && Sn[T.first] >= T.second)
      Sn[T.first] -= T.second, T.second = 0;
    if (T.second) {
      cout << "Nao\n";
      return 0;
    }
  }

  cout << "Sim\n";

  return 0;
}