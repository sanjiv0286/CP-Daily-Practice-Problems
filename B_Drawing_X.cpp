// ETHN
// DATE: 06-09-2022

// TIME: 22-54-58
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j && i != (n + 1) / 2 && j != (n + 1) / 2)
            {
                cout << "\\";
            }
            else if (i == (n + 1) / 2 && j == (n + 1) / 2)
            {
                cout << "X";
            }
            else if (i != (n + 1) / 2 && j != (n + 1) / 2 && i == ((n + 2) - 1) - j)
            {
                cout << "/";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}

