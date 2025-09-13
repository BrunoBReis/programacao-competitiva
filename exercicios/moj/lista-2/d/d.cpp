#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N; cin >> N;  
  vector<int> Ns(N);
  vector<int> Z;
  
  for (int i = 0; i < N; ++i) {
    int tmp; cin >> tmp;
    if (tmp == 0) Z.emplace_back(i);
    Ns[i] = tmp;
  }

  for (auto x : Ns)
    cout << x << ' ';
  cout << '\n';

  for (auto x : Z)
    cout << x << ' ';
  cout << '\n';

  
  return 0;
}
