#include <bits/stdc++.h>
using namespace std;
using ii = pair<int, int>;

vector<ii> solution(const vector<int> &A, const vector<int> &B)
{
    vector<ii> sol;
    int n = A.size(), m = B.size();

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            sol.emplace_back(A[i], B[j]);
    return sol;
}

int main(void)
{
    ios::sync_with_stdio(false);
    vector<int> A = {1, 2, 4}, B = {5, 7, 8};

    vector<ii> sol = solution(A, B);
    for (int i = 0; i < sol.size(); i++)
        cout << "(" << sol[i].first << "," << sol[i].second << ")";
    return 0;
}