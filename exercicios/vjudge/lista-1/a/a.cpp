#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);

  int N, M;

  cin >> N >> M;

  vector<pair<long, long>> n;
  vector<pair<long, long>> m;

  for (int i = 0; i < N; i++) {
    long long a, b;
    cin >> a >> b;
    n.emplace_back(make_pair(a, b));
  }

  for (int i = 0; i < M; i++) {
    long long c, d;
    cin >> c >> d;
    m.emplace_back(make_pair(c, d));
  }

  
  for (int i = 0; i < N; i++) {
    vector<long long> elements;
    long long distance_max = LLONG_MAX;
    for (int j = 0; j < M; j++) {
      long long distance;
      distance = abs(n[i].first - m[j].first) + abs(n[i].second - m[j].second);
      elements.emplace_back(distance);
      if (distance <= distance_max)
        distance_max = distance;
    }
    for (int l = 0; l < M; l++) {
      if (elements[l] == distance_max) {
        cout << l + 1 << endl;
        break;
      }
    }
    elements.clear();
  }

  return 0;
}