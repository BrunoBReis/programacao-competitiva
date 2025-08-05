#include <bits/stdc++.h>

using namespace std;

int main(void) {
  long long n;
  cin >> n;
  if (-(1LL << 31) <= n and n <= (1LL << 31) - 1) cout << "Yes\n";
  else cout << "No\n";
}