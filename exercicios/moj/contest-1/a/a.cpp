#include <bits/stdc++.h>

using namespace std;

inline double solve(double M, double Ymax) {
  return ((Ymax - (M * Ymax)) / (M + 1));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  double M, Ymax;

  cin >> M >> Ymax;
  cout << setprecision(8) << solve(M, Ymax) << '\n';

}