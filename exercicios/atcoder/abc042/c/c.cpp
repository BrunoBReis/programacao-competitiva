#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, K;
  cin >> N >> K;
  vector<bool> Ns(10);
  iota(Ns.begin(), Ns.end(), 1);

  for (int i = 0; i < K; ++i) {
    int t; cin >> t;
    Ns[t] = false;
  }

  vector<int> Ans;
  for (int i = 0; i < Ns.size(); ++i) {
    if (Ns[i])
      Ans.push_back(i);
  }

  

  return 0;
}