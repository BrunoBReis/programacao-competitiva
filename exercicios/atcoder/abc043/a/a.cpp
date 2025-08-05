#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N; cin >> N;
  int sum = 0;
  while (N) {
    sum += N;
    N--;
  }

  cout << sum << "\n";

  return 0;
}