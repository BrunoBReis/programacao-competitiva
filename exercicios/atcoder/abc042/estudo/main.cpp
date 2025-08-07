/*
entrada:
123
saida:
1 2 3
*/
#include <bits/stdc++.h>

using namespace std;

void solve(string s){
  for (char c : s)
    cout << c << ' ';
  cout << '\n';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string s; cin >> s;

  solve(s);

  return 0;
}