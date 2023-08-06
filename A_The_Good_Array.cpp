
// DATE: 03-06-2023
// TIME: 21-07-36
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

void solve()
{
    int n, k;
    cin >> n >> k;

    int mn = n;

    for (int i = 1; i <= n; i++)
    {
        int l = (i + k - 2) / k;
        int r = (n - i + k - 1) / k;
        mn = min(mn, l + r);
    }
    cout << mn + 1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
