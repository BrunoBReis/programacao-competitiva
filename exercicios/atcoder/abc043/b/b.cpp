#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string s; cin >> s;
  stack<char> q;

  for (char x : s) {
    if (x == 'B' && !q.empty())
      q.pop();
    else
      if (x != 'B') q.push(x);
  }

  if (q.empty()) exit(0);

  while(!q.empty()) {
    cout << q.top();
    q.pop();
  }

  cout << '\n';

  return 0;
}