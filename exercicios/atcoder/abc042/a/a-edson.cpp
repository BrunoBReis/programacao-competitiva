#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int A, B, C;
  cin >> A >> B >> C;

  if (A == 5 && B == 5 && C == 7 || A == 5 && B == 7 && C == 5 || A == 7 && B == 5 && C == 5)
    cout << "YES";
  else
    cout << "NO";
  cout << "\n";

  return 0;
}