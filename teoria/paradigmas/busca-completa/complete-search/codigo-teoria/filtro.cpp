#include <bits/stdc++.h>

using namespace std;

vector<int> filter(const int &N, const int &a, const int &b) {
  vector<int> ms;

  // passo por todo o espaco de N
  for (size_t i = 1; i <= N; i++)
    if (i % a == 0 || i % b == 0)
      ms.push_back(i);

  return ms;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N = 10;

  vector<int> ans = filter(N, 2, 3);
  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] << '\n';

  return 0;
}