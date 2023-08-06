#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = 1;
    ll fact = k;
    for (int i = 1; i <= n; i++)
    {
        ans = (ans * fact) % mod;
        fact--;
        if (fact == 0)
            break;
    }
    cout << ans << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

/*
5 2 -->
1 2 1 2 1 2 1 2
2 1 2 1 2 1 2 1
*/

// **********************************************************************************

// DATE: 06-06-2023
// TIME: 06-40-53
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)
const int m = 1e9 + 7;
const double PI = 3.14;
// extern int x;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int fac(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    return (n * fac(n - 1)) % m;
}

void solve()
{
    int n;
    int k;
    cin >> n >> k;
    int ans;

    if (k == 1)
        ans = 1;
    else if (n > 1)
    {
        ans = k;
    }
    else if (k == 0)
        ans = 0;
    else if (k >= n)
    {
        ans = fac(k) / fac(k - n);
    }
    cout << ans << endl;
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
//************************************************************

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define _test     \
    int _TEST;    \
    cin >> _TEST; \
    while (_TEST--)
#define pb push_back

int main()
{
    _test
    {
        int n, k;
        cin >> n >> k;

        if (n == 1)
        {
            cout << k << "\n";
            continue;
        }

        int MOD = 1e9 + 7;
        ll int ans = 1;

        for (int i = 0, z = k; i < min(n, k); i++, z--)
            (ans *= z) %= MOD;

        cout << ans << "\n";
    }
}
