#include <bits/stdc++.h>

using namespace std;

int declare(vector<bool> &pre, const vector<int> &nums) {
  for (int i = 0; i < nums.size(); i++)
    if (pre[i]) {
      pre[i] = false;
      return nums[i];
    }
  return 0;
}

void update(vector<bool> &pre, const vector<int> &nums, int num) {
  pre[num - 1] = false;
}

template <typename T>
void print(vector<T> vec) {
  for (auto x : vec)
    cout << x << ' ' << flush;
  cout << '\n' << flush;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;
  int times = (2 * N) + 1;
  
  vector<bool> pre(times, true);
  vector<int> nums(times);
  iota(nums.begin(), nums.end(), 1);

  // printing
  print(nums);

  cout << declare(pre, nums) << '\n' << flush;
  int choice;
  while(cin >> choice) {
    if (!choice) break;
    update(pre, nums, choice);
    cout << declare(pre, nums) << '\n' << flush;
    // printing
    print(pre);
  }

  return 0;
}