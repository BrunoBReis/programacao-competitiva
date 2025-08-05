#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;

  set<int> nums;
  for (int i = 1; i <= ((2 * N) + 1); ++i)  
    nums.insert(i);

  while (true) {
    cout << *nums.begin() << '\n';
    cout.flush();

    nums.erase(nums.begin());
    
    int x;
    cin >> x;
    if (!x) break;
    nums.erase(x);
    cout.flush();
  }

  return 0;
}