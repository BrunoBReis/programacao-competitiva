#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second 

int dist(pair<int, int> a, pair<int, int> b) {
  return abs(a.x - b.x) + abs(a.y - b.y);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, M;
  cin >> N >> M;

  vector<pair<int, int>> ns(N), ms(M);

  for (int i = 0; i < N; i++)
    cin >> ns[i].x >> ns[i].y;

  for (int i = 0; i < N; i++)
    cin >> ms[i].x >> ms[i].y;

  for (int i = 0; i < N; i++) {
    int k = 0; // posicao de M
    for (int j = 0; j < M; j++)
      if (dist(ns[i], ms[j]) < dist(ns[i], ms[k]))
        k = j;
    cout << k + 1 << '\n';
  }

}