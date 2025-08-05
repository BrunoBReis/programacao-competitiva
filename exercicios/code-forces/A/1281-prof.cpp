#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);

    unsigned short int times;

    cin >> times;
    while (times--)
    {
        string word;
        cin >> word;
        switch (word.back())
        {
        case 'o':
            cout << "FILIPINO" << endl;
            break;
        case 'u':
            cout << "JAPANESE" << endl;
            break;
        default:
            cout << "KOREAN" << endl;
        }
    }
}