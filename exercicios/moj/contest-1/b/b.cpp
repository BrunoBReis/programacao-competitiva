#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;

  unsigned long sum = 0;
  double T, grade = 0;

  for (int i = 1; i <= N; i++) {
    cin >> T;
    sum += i;
    grade = grade + (T * i);
  }

     
  cout << ((grade / sum) >= 5.0 ? "Sim" : "Nao") << '\n';
  cout << setprecision(3) << (grade / sum) << '\n';

  return 0;
}