#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, M;
  cin >> N;
  cin >> M;

  for (int i = 0; i < N; i++) {
    int tmp;
    cin >> tmp;
    if (M != tmp)
      continue;
    else {
      cout << i << '\n';
      return 0;
    }
  }

  cout << "Not Found" << '\n';

  return 0;
}