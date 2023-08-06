// GOOD LUCK
// DATE: 13-11-2022
// TIME: 22-34-44
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 1; i <= n; i++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    vector<ll> factoriall(1000002);
    factoriall[0] = 1;
    for (ll i = 1; i < 1000002; i++)
    {
        factoriall[i] = (i * factoriall[i - 1]) % 1000000007;
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a;
        ll sum = 0;
        for (ll i = 1; i <= n; i++)
        {
            cin >> a;
            sum = (sum + factoriall[a]) % 1000000007;
        }
        cout << sum << "\n";
    }
    return 0;
}

// ll n;
//         cin >> n;
//         ll a;
//         ll fac, sum = 0;
//         for (ll i = 1; i <= n; i++)
//         {
//             cin >> a;
//             fac = 1;
//             for (ll j = 1; j <= a; j++)
//             {
//                 fac = (j * fac) % (1000000007);
//             }
//             sum = fac + sum;
//         }
//         cout << sum << "\n";