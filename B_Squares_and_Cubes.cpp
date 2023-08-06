// DATE: 04-06-2023
// TIME: 18-49-08
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
    ll n;
    cin >> n;
    set<ll> s;
    for (ll i = 1; i * i <= n; i++)
    {
        s.insert(i * i);
    }
    for (ll i = 1; i * i * i <= n; i++)
    {
        s.insert(i * i * i);
    }

    cout << s.size() << endl;
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
