#include <bits/stdc++.h>

using namespace std;

// ESTA ERRADO
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N; cin >> N;

  vector<int> Ns(N);
  for (int &i : Ns)
    cin >> i;

  bool is_pair = (N % 2 == 0) ? true : false;
  bool is_echer = true;
  int total = (is_pair) ? N / 2 : (N / 2) + 1;
  int sum = Ns[0] + Ns[N - 1];

  for (int i = 1; i < total; ++i) {
    if (!is_pair && i + 1 == total && Ns[i] != sum) is_echer = false;
    if (Ns[i] + Ns[N - 1 - i] != sum) {
      is_echer = false;
      break;
    }
  }

  cout << ((is_echer) ? 'S' : 'N') << '\n';
  
  return 0;
}
