#include <bits/stdc++.h>

using namespace std;

template <typename T>
void printStack(stack<T> st) {
  cout << "{ ";
  while (!st.empty()) {
    cout << st.top() << ' ';
    st.pop();
  }
  cout << "}\n";

}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  stack<int> st;

  // insert
  st.push(10);
  st.push(30);
  st.push(40);
  st.push(60);

  printStack(st);

  // acessing elements
  stack<int> st1;
  st1.push(10);
  st1.push(20);
  cout << st.top() << '\n';

  printStack(st1);

  // copy
  stack<int> st2(st1);
  
  printStack(st2);


  return 0;
}