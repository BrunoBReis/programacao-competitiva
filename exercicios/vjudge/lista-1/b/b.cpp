#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int K, S;
  cin >> K >> S;

  int count = 0;
  for (int i = 0; i <= K; i++) {
    for (int j = 0; j <= K; j++) {
      // range de z
      if ((S - (i + j)) <= K && (S - (i + j)) >= 0)
        count++;
    }
  }

  cout << count << '\n';

  return 0;
}