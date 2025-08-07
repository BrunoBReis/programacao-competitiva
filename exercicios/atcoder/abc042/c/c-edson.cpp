#include <bits/stdc++.h>

using namespace std;

bitset<10> ds;

bool is_valid(int n) {
  while (n) {
    auto d = n % 10;
    n /= 10;

    if (ds[d])
      return false;
  }
  return true;
}

int solve(int N) {
  while(!is_valid(N))
    ++N;
  return N;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, K, d;
  cin >> N >> K;

  while (K--) {
    cin >> d;
    ds[d] = true;
  }

  cout << solve(N) << '\n';

}