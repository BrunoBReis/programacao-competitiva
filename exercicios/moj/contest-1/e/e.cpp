#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;
  if (N == 1) { cout << "deficiente" << '\n'; exit(EXIT_SUCCESS); }

  int sum = 0;

  for (int i = 1; i <= (N / 2); i++)
    if (N % i == 0)
      sum += i;


  if (sum == 1)
    cout << "primo" << '\n';
  else if (sum == N)
    cout << "perfeito" << '\n';
  else if (sum > N)
    cout << "abundante" << '\n';
  else
    cout << "deficiente" << '\n';


  return EXIT_SUCCESS;
}