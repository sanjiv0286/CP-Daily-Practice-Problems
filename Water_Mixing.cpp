// GOOD LUCK
// DATE: 13-11-2022
// TIME: 13-26-20
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 1; i <= n; i++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin >> t;
    int res;
    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        if (a == b)
            cout << "YES"
                 << "\n";
        else if (a < b)
        {
            {
                int res = (b - a);
                if (res <= x)
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
        }
        else if (a > b)
        {
            {
                int res = abs(a - b);
                if (res <= y)
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
        }
    }
    return 0;
}