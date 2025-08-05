#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  unsigned int N, M;
  cin >> N >> M;

  unsigned int curr, cnt = 0, mass = 0;

  // first item
  unsigned past;
  cin >> past;
  mass += past;
  cnt++;

  for (int i = 0; i < (N - 1); i++) {
    cin >> curr;
    if (curr <= past && cnt < M) {
      past = curr;
      mass += past;
      cnt++;
    }
    else
      continue;
  }

  cout << mass << '\n';

  return 0;
}