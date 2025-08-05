#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;

  vector<char> a;
  char let;
  while (cin >> let)
    a.push_back(let);

  cout << a.at(N - 1) << '\n';

  return 0;
}