// CODE WRITTEN BY SK
// DATE: 04-11-2022
// TIME: 10-04-40
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
        int n, x;
        cin >> n >> x;
        int s, r, max = 0;
        while (n--)
        {
            cin >> s >> r;
            if (s <= x && r > max)
            {
                max = r;
            }
        }
        cout << max << "\n";
    }
    return 0;
}