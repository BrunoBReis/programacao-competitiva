#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);

  long long V;
  cin >> V;

  long long curr;
  int curr_size;
  string curr_string;

  vector<int> nums;

  for (int i = 0; i < V; i++) {
    cin >> curr;

    for (char c: to_string(curr))
      nums.push_back(c - '0');

    for (int c: nums)
      cout << c << endl;

    int perm = 0;
    for (int d: nums)
      perm = perm * 10 + d;

    cout << perm << endl;
    
  }

  return 0;
}