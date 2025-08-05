#include <bits/stdc++.h>

using namespace std;
using ii = pair<int, int>;

void rotate (ii &p) {
  p = { p.second, -p.first };
}

ii solve(int N, const string &S) {
  ii pos(0, 0), dir(1, 0);
  for (char c : S) {
    if (c == 'S') {
      pos.first += dir.first;
      pos.second += dir.second;
    }
    else
      rotate(dir);
  }
  return pos;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  string S;
  cin >> N >> S;

  auto [x, y] = solve(N, S);

  cout << x << ' ' << y << '\n';

  
  return 0;
}