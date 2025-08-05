#include <bits/stdc++.h>

using namespace std;

constexpr int MAX { 200'010 };

static int st[MAX];

int F(int N) {
  if (N == 0 || N == 1)
    return N;
  if (st[N] != -1)
    return st[N];
  
  st[N] = F(N - 1) + F(N - 2);

  return st[N];
}


int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  memset(st, -1, sizeof(st));

  int N;
  cin >> N;

  cout << F(N) << '\n';

  return 0;
}