// CODE WRITTEN BY SK
// DATE: 04-11-2022
// TIME: 22-29-13
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
        int r = (2 * n - x) + 1;
        cout << r << "\n";
    }
    return 0;
}