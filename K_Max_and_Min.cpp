// ETHN
// DATE: 22-09-2022
// TIME: 17-11-45

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    {
        if (a <= b && a <= c)
        {
            cout << a;
        }
        else if (b <= a && b <= c)
        {
            cout << b;
        }
        else
        {
            cout << c;
        }
    }
    cout << " ";
    {
        if (a >= b && a >= c)
        {
            cout << a;
        }
        else if (b >= a && b >= c)
        {
            cout << b;
        }
        else

        {
            cout << c;
        }
    }

    return 0;
}