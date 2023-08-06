// ETHN
// DATE: 16-08-2022
// TIME: 22-09-14
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    // for (int i = 0; i <= b; i++)
    // {
    if (a == b + 1)
    {
        cout << "YES";
    }
    else if (b == a + 1)
    {
        cout << "YES";
    }
    else if (a == 0 && b == 0)
    {
        cout << "NO";
    }
    else if (b == a)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }
    // }

    return 0;
}