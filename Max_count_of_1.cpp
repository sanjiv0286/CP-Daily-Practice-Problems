
// DATE: 05-04-2023
// TIME: 21-54-43
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

void solve()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll ct = 0;
    ll X = (s[0] == '0') ? 1 : 0;
    if (X == 1)
    {
        ct++;
    }

    for (ll i = 1; i < n; i++)
    {
        ll temp = X ^ (s[i] - '0');
        if (temp == 1)
        {
            ct++;
        }
        X = temp;
    }

    cout << ct << endl;
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
