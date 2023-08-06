// ETHN
// DATE: 15-08-2022
// TIME: 22-55-37
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, start, end;
    cin >> a >> b >> c >> d;
    if ((c < a && d < a) || (c > b && d > b))
    {
        cout << -1;
    }
    else
    {
        if (a > c)
        {
            start = a;
        }
        else
        {
            start = c;
        }
        if (b > d)
        {
            end = d;
        }
        else
        {
            end = b;
        }
        cout << start << " " << end;
    }

    return 0;
}