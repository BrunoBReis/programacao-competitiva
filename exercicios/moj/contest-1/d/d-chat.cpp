#include <bits/stdc++.h>

using namespace std;

int card_value(char c) {
  switch(c) {
    case 'A': 
      return 1;
    case 'T': case 'J': case 'Q': case 'K':
      return 10;
    default:
      return c - '0';
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  unsigned int sum = 0;
  pair<char, char> card;

  // se todos numeros forem 1, nao ha como ler mais do que isso
  for (int i = 0; i <= 21; i++) {
    // uma abordagem parecida com card.first e card.second
    auto [a, b] = card;
    cin >> a >> b;
    int value = card_value(a);
    if (sum + value > 21)
      break;
    sum += value;
  }

  cout << sum << '\n';
  return 0;
}
