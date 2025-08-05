#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);

  int M, times = 1; 
  cin >> M;

  unsigned long long int n = M * 8000000;

  while((2 << times) <= n) {
    times++;
  }

  cout << times + 1 << "\n";

  return 0;
}