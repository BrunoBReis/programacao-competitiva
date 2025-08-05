#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  double one = 0, second = 0;

  for (int i = 0; i < n; i++)
  {
    char k;
    cin >> k;
    if (k == '*')
      one++;
  }
  for (int i = 0; i < n; i++)
  {
    char k;
    cin >> k;
    if (k == '*')
      second++;
  }

  cout << setprecision(3) << abs((second / one) - 1) << endl;
}