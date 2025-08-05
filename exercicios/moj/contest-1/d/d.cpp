#include <bits/stdc++.h>

using namespace std;

inline bool is_ten(char c) {
  return (c == 'T' || c == 'J' || c == 'Q' || c == 'K');
}


int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int total = 21;
  pair<char, char> cart;
  while(cin >> cart.first >> cart.second) {
    if (is_ten(cart.first))
      if (total >= 10)
        total -= 10;
      else
        break;
    else if (cart.first == 'A')
      if (total >= 1)
        total -= 1;
      else
        break;
    else
      if (total >= atoi(&cart.first))
        total -= atoi(&cart.first);
      else
        break;
  }

  cout << 21 - total << '\n';
}