#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string s; cin >> s;
  stack<char> st;

  for (char c : s) {
    if (c != 'B')
      st.push(c);
    else
      if (!st.empty())
        st.pop();
  }

  if (st.empty()) exit(EXIT_SUCCESS);

  stack<char> rst;
  
  while(!st.empty()) {
    rst.push(st.top());
    st.pop();
  }

  while(!rst.empty()) {
    cout << rst.top();
    rst.pop();
  }

  cout << '\n';

  return 0;
}