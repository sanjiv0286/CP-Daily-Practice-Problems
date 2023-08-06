// ETHN
// DATE: 15-08-2022
// TIME: 09-36-37
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z, a, b, c;
    cin >> x >> y >> z;
    {
        if (x >= y && x >= z)
        {
            a = x;
            if (y >= z)
            {
                b = y;
                c = z;
            }
            else
            {
                b = z;
                c = y;
            }
        }
        else if (y >= x && y >= z)
        {
            a = y;
            if (x >= z)
            {
                b = x;
                c = z;
            }
            else
            {
                b = z;
                c = x;
            }
        }
        else if (z >= y && z >= x)
        {
            a = z;
            if (y >= x)
            {
                b = y;
                c = x;
            }
            else
            {
                b = x;
                c = y;
            }
        }
        cout << c << "\n"
             << b << "\n"
             << a << "\n";
    }
    cout << "\n";
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;
}