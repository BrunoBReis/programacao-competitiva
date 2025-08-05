#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> cartesian_product(const vector<int> &a, const vector<int> &b) {
  vector<pair<int, int>> ans;
  for (size_t i = 0; i < a.size(); i++)
    for (size_t j = 0; j < b.size(); j++)
      ans.emplace_back(a[i], b[j]);

  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  return 0;
}