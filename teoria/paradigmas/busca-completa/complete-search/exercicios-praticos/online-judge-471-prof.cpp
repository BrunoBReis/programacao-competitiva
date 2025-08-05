#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<ll, ll>;

int digits_count(ll num) {
  int total = 0;

  // implementar so com whiel precisa verificar se eh zero
  do {
    num /= 10;
    total++;
  } while(num);

  return total;
}

int my_digits_count(ll num) {
  return to_string(num).length();
}

bool has_repeted_digits(ll num) { 
  bitset<10> used;
  used.reset();

  while (num) {
    int digit = num % 10;
    num /= 10;
    if (used[num])
      return true;
    used[num] = true;
  }
  return false;
}

bool my_has_repeted_digits(ll num) {
  vector<int> tmp;
  int digit;

  while(num) {
    digit = num % 10;
    if (!tmp.empty()) {
      for (int x: tmp) {
        if (x == digit)
          return true;
      }
    }
    tmp.emplace_back(digit);
    num /= 10;
  }
  return false;
}

vector<ii> solve (ll N) {
  vector<ii> ans;

  for (ll d = 1; my_digits_count(d * N) <= 10; d++) {
    if (not my_has_repeted_digits(d) and not my_has_repeted_digits(d * N))
      ans.emplace_back(d * N, d);
  }

  return ans;

}


int main(void) {
  ios::sync_with_stdio(false);

  int T;
  cin >> T;

  for (int i = 1; i <= T; i++) {
    ll N;
    cin >> N;

    vector<ii> ans = solve(N);

    if (i > 1)
      cout << endl;
    
    for (auto [s1, s2] : ans)
      cout << s1 << " / " << s2 << " = " << N << endl;

  }

  return 0;
}