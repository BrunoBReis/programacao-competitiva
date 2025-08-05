#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  // vector
  vector<int> a {1, 2, 3};
  vector<int> b(10, 0);
  vector<int> c(10);
  iota(c.begin(), c.end(), 0);
  c.pop_back();
  cout << distance(c.begin(), find(c.begin(), c.end(), 0)) << '\n';
  c.erase(find(c.begin(), c.end(), 0));
  vector<int> d;
  d.push_back(1);
  d.emplace_back(2);
  d.insert(d.begin() + 0, {1, 2});
  d.emplace(d.begin() + 0, 1);

  // stack LIFO
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(40);
  st.push(10);
  while (!st.empty()) {
    cout << st.top() << '\n';
    st.pop();
  }

  // queue
  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  while (!q.empty()) {
    cout << q.front() << '\n';
    q.pop();
  }


  return 0;
}
