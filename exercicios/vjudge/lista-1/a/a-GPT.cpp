#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(void) {
  ios::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;

  vector<pair<int, int>> n(N), m(M);

  // lendo input
  for (int i = 0; i < N; i++)
    cin >> n[i].first >> n[i].second;
  for (int i = 0; i < M; i++)
    cin >> m[i].first >> m[i].second;

  // para todo estudante
  for (int i = 0; i < N; i++) {
    vector<int> distance(M);
    int min = INT_MAX;

    // calculando a distancia e min
    for (int j = 0; j < M; j++) {
      int d = abs(n[i].first - m[j].first) + abs(n[i].second - m[j].second);
      distance[j] = d;
      if (d < min)
        min = d;
    }

    // primeiro min
    for (int j = 0; j < M; j++) {
      if (distance[j] == min) {
        cout << j + 1 << endl;
        break;
      }
    }
  }
  
  return 0;
}