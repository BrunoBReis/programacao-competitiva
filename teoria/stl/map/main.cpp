#include <bits/stdc++.h>

using namespace std;

template <typename A, typename B>
void printMap(const map<A,B> &a) {
  cout << "{ ";
  for (const auto &x: a)
    cout << x.first << ',' << x.second << ' ';
  cout << "}" << '\n';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  // inicializando
  // 1
  map<int, char> a {{1, 'a'}, {2, 'b'}, {3, 'c'}};
  // 2
  map<int, int> b;
  b.insert({1, 2});
  // 3
  map<int, char> c(a);
  // 4
  vector<pair<int, char>> d {{1, 2}, {3, 4}, {5, 6}};
  map<int, int> e(d.begin(), d.end());
  
  printMap(a);
  printMap(b);
  printMap(c);
  printMap(e);

  cout << "-----" << '\n';

  // inserindo no map

  return 0;
}