#include <bits/stdc++.h>

using namespace std;

int find(const int &x, const vector<int>& xs) {
  for (size_t i = 0; i < xs.size(); i++)
    if (xs[i] == x)
      return i;
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> xs {2,3,4,5,6,7,7,8};
  
  cout << find(13, xs) << '\n';

  return 0;
}