// Entrada:
// N => inteiro
// s t => n vezes
// Saida:
// Imprima um unico 


#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N; cin >> N;
  vector<pair<int, int>> P(N);

  for (int i = 0; i < N; ++i)
    cin >> P[i].first >> P[i].second;

  sort(P.begin(), P.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
    return a.second < b.second;
  });

  // parei por aqui

  return 0;
}
