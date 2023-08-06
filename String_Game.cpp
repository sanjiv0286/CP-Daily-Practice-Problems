// GOOD LUCK
// DATE: 13-11-2022
// TIME: 15-07-34
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 1; i <= n; i++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll x = 1e5 + 10;
        ll a[x] = {0};

        for (ll i = 0; i < n; i++)
        {
            a[s[i]]++;
        }

        bool b = true;

        for (ll i = 0; i < x; i++)
        {
            if (a[i] % 2 != 0)
            {
                b = false;
                break;
            }
        }

        if (b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
