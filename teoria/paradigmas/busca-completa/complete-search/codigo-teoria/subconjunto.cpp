#include <bits/stdc++.h>

using namespace std;

void subset(int n, function<void(int)> process) {
  for (int s = 0; s < (1 << n); s++)
    process(s);
}

void my_subset(int n) {
  for (int s = 0; s < (1 << n); s++)
    cout << s << ' ';
  cout << '\n';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N = 19;

  subset(N, [N](int s){
    cout << "{ ";
    for (int i = 0; i < N; i++)
      if (s & (1 << i))
        cout << (i + 1) << ' ';
    cout << "}\n";
  });

  return 0;
}