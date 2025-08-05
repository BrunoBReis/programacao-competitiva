#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    char cpf[256];
    cin >> cpf;

    int i = 0;

    while (cpf[i] != '\0')
    {
        if (cpf[i] == '-' || cpf[i] == '.')
        {
            cout << endl;
            i++;
            continue;
        }
        cout << cpf[i];
        i++;
    }

    cout << endl;

    return 0;
}