#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);

  unsigned int n, s, count = 0;
  cin >> n;
  s = (int)size(to_string(n));

  for (int i = 0; i < (1 << s); i++) {
    string bin_str = bitset<32>(i).to_string().substr(32 - s);
    if (stoi(bin_str) > n) 
      break;
    count++;
  }

  cout << count - 1 << endl;

  return 0;
}