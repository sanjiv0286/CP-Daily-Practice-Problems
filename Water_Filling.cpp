// DATE: 31-05-2023
// TIME: 20-07-37
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
    int x, y, z;
    cin >> x >> y >> z;
    if ((x == 0 && y == 0) || (y == 0 && z == 0) || (z == 0 && x == 0))
    {
        cout << "Water filling time" << endl;
    }
    else
    {
        cout << "Not now" << endl;
    }
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
