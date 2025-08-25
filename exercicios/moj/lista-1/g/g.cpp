#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  
  int N, P; cin >> N >> P;
  int days = 0, bac = 1;
  while(bac < N) {
    bac *= P;
    if (bac > N) break;
    days++;
  }

  cout << days << '\n'; 
  

  return 0;
}
