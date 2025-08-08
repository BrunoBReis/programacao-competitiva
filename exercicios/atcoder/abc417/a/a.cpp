#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, A, B;
  cin >> N >> A >> B;
  
  string S;
  cin >> S;

  for (int i = A; i < S.size() - B; ++i)
    cout << S[i];
  cout << '\n';

  return 0;
}