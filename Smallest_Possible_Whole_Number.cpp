// DATE: 19-06-2023
// TIME: 11-27-27
#include <bits/stdc++.h>
// #include <unordered_set>
using namespace std;

#define ll long long
#define all(a) a.begin(), a.end()

#define forn(i, n) for (ll i = 0; i < n; i++)
#define rep(i, a, b) for (ll i = a; i <= b; i++)
#define dep(i, b, a) for (ll i = b; i >= a; i--)

#define print(x) cout << x << "\n"
#define vin(v)        \
    for (auto &x : v) \
    cin >> x

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (k == 0)
        print(n);

    else
    {
        ll ans = n % k;
        cout << ans << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t; //= 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
