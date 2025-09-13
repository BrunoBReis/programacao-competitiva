#include <bits/stdc++.h>

constexpr int MAX { 10'001 };

using namespace std;

int A[MAX];

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N; cin >> N;

  for (int i = 0; i < N; ++i)
    cin >> A[i];

  bool is_echer = true;
  int cons = A[0] + A[N - 1];

  for (int i = 0; i < N; ++i) {
    if (A[i] + A[N - i - 1] != cons) {
      is_echer = false;
      break;
    }
  }

  cout << ((is_echer) ? 'S' : 'N') << '\n';

  return 0;
}
