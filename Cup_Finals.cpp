// CODE WRITTEN BY SK
// DATE: 04-11-2022
// TIME: 12-24-54
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
    while (t--)
    {
        int x, y, d;
        cin >> x >> y >> d;
        int p = abs(x - y);
        if (p <= d)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}