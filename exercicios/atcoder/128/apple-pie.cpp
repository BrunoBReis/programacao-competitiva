#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    unsigned int apple, pices_apple, total;
    cin >> apple >> pices_apple;
    apple *= 3;
    apple += pices_apple;
    total = (apple / 2);
    cout << total << endl;
}