// CODE WRITTEN BY SK
// DATE: 09-11-2022
// TIME: 20-57-20
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
        int x;
        cin >> x;

        if (x >= 2000)
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


