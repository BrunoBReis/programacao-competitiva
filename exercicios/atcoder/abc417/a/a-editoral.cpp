#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, A, B;
  cin >> N >> A >> B;
  
  string S;
  cin >> S;

  cout << S.substr(A, N - A - B) << '\n';

  return 0;
}