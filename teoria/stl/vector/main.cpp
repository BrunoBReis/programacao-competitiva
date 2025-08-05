#include <bits/stdc++.h>

using namespace std;

template <typename T>
void printVector(const vector<T> &a) {
  cout << "{ ";
  for (auto x: a)
    cout << x << " ";
  cout << "}\n";
}


int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  // inicializando arrays
  // 1
  vector<int> a {1, 2, 3, 4, 5};
  // 2
  vector<int> b;
  b.push_back(1);
  b.push_back(2);
  b.push_back(3);
  // 3
  vector<bool> c(10, true);
  // 4
  int arr[] {3, 4, 5, 6, 7};
  int n = sizeof(arr) / sizeof(int);
  vector<int> d {arr, arr + n};
  // 5
  vector<bool> e(c.begin(), c.end());
  // 6
  vector<int> f(10);
  fill(f.begin(), f.end(), 12);
  // 6.1
  vector<int> g(12);
  iota(g.begin(), g.end(), 0);

  printVector(a);
  printVector(b);
  printVector(c);
  printVector(d);
  printVector(e);
  printVector(f);
  printVector(g);

  cout << "-----" << '\n';

  // inserindo em vector
  // 1
  vector<int> h(3);
  h.push_back(1);
  h.push_back(4);
  h.push_back(5);
  h.emplace_back(6);
  h.emplace_back(9);
  h.emplace_back(7);
  // 2
  vector<int> i;
  i.insert(i.begin(), 1);
  i.insert(i.begin() + 1, 3);
  i.insert(i.end(), {4, 5});
  i.emplace(i.end(), 3);
  i.emplace(i.end(), 4);

  printVector(h);
  printVector(i);

  cout << "-----" << '\n';

  // acessando vector
  // 1
  vector<int> j(10, 1);
  j.at(1) = 1;
  j.at(2) = 2;
  j[3] = 3;
  j[4] = 4;
  *(j.begin() + 5) = 5;
  *(j.begin() + 6) = 6;
  // 2
  j.front() = 0;
  j.back() = 10;

  printVector(j);

  cout << "-----" << '\n';

  // delete elements
  vector<int> k(10);
  iota(k.begin(), k.end(), 1);
  k.pop_back();
  k.erase(find(k.begin(), k.end(), 3));

  printVector(k);

  cout << "-----" << '\n';

  return 0;
}