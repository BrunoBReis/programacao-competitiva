#include <bits/stdc++.h>

using namespace std;

void my_permutation(size_t n, function<void(const vector<int>&)> process) {
  vector<int> ans(n);

  iota(ans.begin(), ans.end(), 1);

  do {
    process(ans);
  } while (next_permutation(ans.begin(), ans.end()));
}

void my_combination(int n, int m, function<void(const vector<int>&)> process) {
  vector<int> ns(m, 1);
  ns.resize(n);

  do {
    process(ns);
  } while (prev_permutation(ns.begin(), ns.end()));
}


int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  size_t size = 4;

  my_permutation(size, [](const vector<int> &test){
    for (auto x: test)
      cout << x << ' ';
    cout << '\n';
  });


  return 0;
}
