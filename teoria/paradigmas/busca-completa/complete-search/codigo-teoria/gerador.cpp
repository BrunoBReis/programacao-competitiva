#include <bits/stdc++.h>

using namespace std;

vector<int> gerador(const int &N, const int &a, const int &b) {
  vector<int> ms;

  for (int i = a; i <= N; i += a)
    ms.push_back(i);
  
  for (int i = b; i <= N; i +=b)
    if (i % a)
      ms.push_back(i);

  return ms;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N = 10;

  vector<int> ans = gerador(N, 2, 3);
  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] << '\n';

  return 0;
}