#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  unsigned int N, M;
  cin >> N >> M;

  unsigned long int mass = 0;
  unsigned int top = INT_MAX, cnt = 0;

  for (int i = 0; i < N; i++) {
    int curr;
    cin >> curr;
    if (cnt < M && curr <= top) {
      mass += curr;
      top = curr;
      cnt++;
    }
  }

  cout << mass << '\n';

  return 0;
}