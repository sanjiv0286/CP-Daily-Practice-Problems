// DATE: 05-04-2023
// TIME: 21-13-07
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (s[0] == '0')
    {
        k--;
        s[0] = '1';
    }
    while (k--)
    {
        s.push_back('0');
    }
    cout << s << "\n";
    return;
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
