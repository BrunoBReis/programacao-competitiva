#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, total = 0;
  cin >> N;

  vector<string> S;
  set<int> sizes;
  
  for (int i = 0; i < N; ++i) {
    int L;
    cin >> L;
    sizes.insert(L);
    string s;
    char c;
    for (int j = 0; j < L; ++j) {
      cin >> c;
      s += c;
    }
    S.push_back(s);
  }

  total += sizes.size();

  sort(S.begin(), S.end());

  for (int i = 0; i < N; ++i)
    cout << S[i] << '\n';

  for (int i = 0; i < N; ++i) {
    if (i + 1 < N) {
      if (S[i].size() == S[i + 1].size()) {
        bool found = false;
        for (int j = 0; j < S[i].size(); ++j) {
          if (S[i][j] != S[i + 1][j]) break;
          else {
            found = true;
          }
        }
        if (found)
          total++;
      }
    }
  }

  cout << total << '\n';
  return 0;
}