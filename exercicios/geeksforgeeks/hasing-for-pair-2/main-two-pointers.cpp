#include <bits/stdc++.h>

using namespace std;

bool solve(vector<int> arr, int sum) {
  int l = 0, r = arr.size() - 1;
  sort(arr.begin(), arr.end());
  while (l < r) {
    int csum = arr.at(l) + arr.at(r);
    if (csum == sum)
      return true;
    else if (csum < sum)
      l++;
    else
      r--;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr;
  int sum, tmp;

  string line;
  getline(cin, line);

  stringstream ss(line);
  while (ss >> tmp)
    arr.push_back(tmp);

  cin >> sum;

  // for (auto x: arr)
  //   cout << x << '\n';

  cout << solve(arr, sum) << '\n';

  return 0;
}