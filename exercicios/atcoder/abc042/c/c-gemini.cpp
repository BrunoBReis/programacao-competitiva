#include <bits/stdc++.h>

using namespace std;

bool solve(int num, const vector<bool> &Ns) {
  // para cada um dos digitos
  while (num > 0) {
    int digit = num % 10;
    if (!Ns[digit])
      return false;
    num /= 10; 
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, K;
  cin >> N >> K;
  vector<bool> Ns(10, true);

  for (int i = 0; i < K; ++i) {
    int t; cin >> t;
    Ns[t] = false;
  }

  while (true) {
    if (solve(N, Ns)) {
      cout << N << '\n';
      break;
    }
    N++;
  }

  return 0;
}