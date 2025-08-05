#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int T;
  cin >> T;
  unordered_set<char> C;

  for (int i = 0; i < T; ++i) {
    char c;
    cin >> c; 
    C.insert(toupper(c));
  }

  // for (auto it = C.begin(); it != C.end(); ++it)
  //   cout << *it << ' ';
  // cout << '\n';

  int N;
  cin >> N;

  string c;
  getline(cin , c);

  for (int i = 1; i <= N; ++i) {
    string s;
    getline(cin, s);
    bool found = false;
    for (int j = 0; j < s.size(); ++j) {
      if (C.count(toupper(s[j]))) {
        found = true;
        cout << "Mensagem #" << i << ": Carlos\n";
        break;
      }
    }
    if (!found)
      cout << "Mensagem #" << i << ": Beto ou Carlos\n";
  }
  

  return 0;
}