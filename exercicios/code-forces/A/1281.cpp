#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);

    unsigned short int times;

    cin >> times;
    while(times--)
    {
        string word;
        cin >> word;
        if (word[word.size() - 1] == 'o')
            cout << "FILIPINO" << endl;
        else if (word[word.size() - 1] == 'a')
            cout << "KOREAN" << endl;
        else
            cout << "JAPANESE" << endl;
    }
}