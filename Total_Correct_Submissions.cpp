// DATE: 05-06-2023
// TIME: 18-09-59
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

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

void solve()
{
    int n;
    cin >> n;
    map<string, int> m;
    vector<int> v;
    forn(i, 3 * n)
    {
        string s;
        int ct;
        cin >> s >> ct;
        m[s] += ct;
        // cout << m[s] << " ";
        // cout << ct;
    }
    for (auto &x : m)
    {
        v.push_back(x.second);
    }
    sort(v.begin(), v.end());
    for (auto &x : v)
    {
        cout << x << " ";
    }
    cout << "\n";
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
