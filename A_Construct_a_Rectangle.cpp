// ETHN
// DATE: 17-10-2022
// TIME: 19-21-39
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, x, y, z;
        cin >> a >> b >> c;
        {
            if (a >= b && a >= c)
            {
                x = a;
                if (b > c)
                {
                    y = b;
                    z = c;
                }
                else
                {
                    y = c;
                    z = b;
                }
            }
            else if (b >= a && b >= c)
            {
                x = b;
                if (a > c)
                {
                    y = a;
                    z = c;
                }
                else
                {
                    y = c;
                    z = a;
                }
            }
            else if (c >= a && c >= b)
            {
                x = c;
                if (a > b)
                {
                    y = a;
                    z = b;
                }
                else
                {
                    y = b;
                    z = a;
                }
            }
        }
        if (x == y + z)
        {
            cout << "YES"
                 << "\n";
        }
        else if (x == y && z % 2 == 0)
        {
            cout << "YES"
                 << "\n";
        }
        else if (z == y && x % 2 == 0)
        {
            cout << "YES"
                 << "\n";
        }
        else if (x == z && y % 2 == 0)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}
