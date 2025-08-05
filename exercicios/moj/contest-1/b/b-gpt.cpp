#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;

  long long sum = (N) * (N + 1) / 2;

  double T, grade = 0.0;
  for (int i = 1; i <= N; i++) {
    cin >> T;
    grade += (T * i);
  }

     
  cout << ((grade / sum) >= 5.0 ? "Sim" : "Nao") << '\n';
  cout << fixed << setprecision(2) << (grade / sum) << '\n';

  return 0;
}