#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, S;
  cin >> N >> S;

  vector<string> Ns(N);

  for (int i = 0; i < N; ++i) {
    string s; cin >> s;
    Ns.push_back(s);
  }

  sort(Ns.begin(), Ns.end());

  for (auto x : Ns) {
    cout << x;
  }
  cout << '\n';


  return 0;
}