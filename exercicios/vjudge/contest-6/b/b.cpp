#include <bits/stdc++.h>

using namespace std;

static int curr = 0;

static int next(int curr) {
  return ((curr + 1) % 4);
}

void change(vector<bool> &coord) {
  coord.at(curr) = false;
  coord.at(next(curr)) = true;
  curr = next(curr);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, x = 0, y = 0;
  vector<bool> coord {true, false, false, false};
  string T;

  cin >> N;
  cin >> T;

  for (char c : T) {
    if (c == 'S') {
      if (coord[0])
        x++;
      else if (coord[1])
        y--;
      else if (coord[2])
        x--;
      else
        y++;
    }
    else
      change(coord);
  }

  cout << x << ' ' << y << '\n';


  return 0;
}