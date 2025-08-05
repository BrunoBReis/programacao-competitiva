#include <bits/stdc++.h>

using namespace std;

bool solve(const vector<int> &arr, int sum) {
  unordered_set<int> us;

  for (int num : arr) {
    int to_find = sum - num;
    if (us.count(to_find))
      return true;
    us.insert(num);
  }
  return false;
}


int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int sum, tmp;
  vector<int> arr;

  string line;
  getline(cin, line);

  stringstream ss(line);

  while (ss >> tmp)
    arr.emplace_back(tmp);
  cin >> sum; 

  cout << solve(arr, sum) << '\n';

  return 0;
}