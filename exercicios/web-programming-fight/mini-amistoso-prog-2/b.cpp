#include <bits/stdc++.h>

using namespace std;

vector<char> vogals = {'a', 'e', 'i', 'o', 'u'};

bool find_vogal(char l) {
  for (int i = 0; i < vogals.size(); i++) {
    if (l == vogals[i])
      return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  unsigned int N;
  cin >> N;
  
  for (int i = 0; i < N; i++) {
    bool ok = false;
    bool no = false;
    int times = 0;

    string name;
    cin >> name;
    if (name.size() < 3) {
      cout << "NO" << '\n';
      continue;
    }

    for (int j = 0; j < name.size(); j++) {
      if (find_vogal(name[0])) {
        if (j % 2 == 1) {
          if (!find_vogal(name[j])) {
            ok = true;
          }
          else {
            cout << "NO" << '\n';
            no = true;
            break;
          }
        }
        else if (j % 2 == 0) {
          if (find_vogal(name[j]))
            ok = true;
          else {
            cout << "NO" << '\n';
            no = true;
            break;
          }
        }
      }
      if (!find_vogal(name[0])) {
        if (j % 2 == 1) {
          if (find_vogal(name[j]))
            ok = true;
          else {
            cout << "NO" << '\n';
            no = true;
            break;
          }
        }
        else if (j % 2 == 0) {
          if (!find_vogal(name[j]))
            ok = true;
          else {
            cout << "NO" << '\n';
            no = true;
            break;
          }
        }
      }
    }
    if (ok && !no)
      cout << "YES" << '\n';
  }

  return 0;
}