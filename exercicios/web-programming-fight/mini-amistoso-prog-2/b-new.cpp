#include <bits/stdc++.h>

using namespace std;

inline bool is_vogal(char c) {
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  unsigned int N;
  cin >> N;
  
  // for every name
  while (N--) {
    string name;
    cin >> name;

    if (name.size() < 3) {
      cout << "NO" << '\n';
      continue;
    }

    bool first_vogal = (is_vogal(name[0])) ? true : false;
    bool ans = true;

    for (int i = 1; i < name.size(); i++) {
      bool order;

      if (first_vogal)
        order = (i % 2 == 0 ? true : false);
      else
        order = (i % 2 == 1 ? true : false);

      if (is_vogal(name[i]) == order)
        continue;
      else {
        ans = false;
        break;
      }
    }
    cout << (ans ? "YES" : "NO") << '\n';
  }

  return 0;
}