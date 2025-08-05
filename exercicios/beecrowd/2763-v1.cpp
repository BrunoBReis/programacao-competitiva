#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string cpf;
    cin >> cpf;

    for (auto c : cpf)
    {
        if (isdigit(c))
            cout << c;
        else
            cout << endl;
    }

    cout << endl;
}