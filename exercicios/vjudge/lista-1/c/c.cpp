#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string S;
  cin >> S;

  long long sum = 0;

  for (int i = 0; i < (1 << (S.size() - 1)); i++) {
    long long start = 0;
    cout << bitset<3>(i) <<  ':' << '\n';
    for (int j = 0; j < (S.size() - 1); j++) {
      if (i & (1 << j)) {
        cout << '\t';
        cout << stoll(S.substr(start, (j + 1) - start)) << '\n';
        start = j + 1;
      }
    }
    cout << '\t';
    cout << stoll(S.substr(start, S.size() - start)) << '\n';
  }

  return 0;
}