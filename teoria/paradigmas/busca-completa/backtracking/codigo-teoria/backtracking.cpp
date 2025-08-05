#include <bits/stdc++.h>

using namespace std;

inline bool is_solution(int i, int N) { return i == N; }

void process_solution(const vector<int>& xs) {
  cout << "{ ";
  for (auto x: xs)
    cout << x << ' ';
  cout << "}\n";
}

vector<int> candidates(int i, const vector<int>& as) {
  return { as[i] };
}

void backtracking(vector<int>& xs, int i, int N, const vector<int>& as) {
  if (is_solution(i, N))
    process_solution(xs);
  else {
    auto cs = candidates(i, as);

    for (auto c : cs) {
      backtracking(xs, i + 1, N, as);

      xs.push_back(c);
      backtracking(xs, i + 1, N, as);
      xs.pop_back();
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);


  int n = 19;
  vector<int> as(n), xs;
  iota(as.begin(), as.end(), 1);
  backtracking(xs, 0 ,(int) as.size(), as);

  return 0;
}