// DATE: 08-06-2023
// TIME: 13-53-56
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
    int a, b;
    cin >> a >> b;
    int sum = a + b;
    string s = to_string(sum);
    int ct = 0;
    forn(i, s.size())
    {
        if (s[i] == '0' || s[i] == '6' || s[i] == '9')
        {
            ct += 6;
        }
        if (s[i] == '1')
        {
            ct += 2;
        }
        if (s[i] == '2' || s[i] == '3' || s[i] == '5')
        {
            ct += 5;
        }

        if (s[i] == '4')
        {
            ct += 4;
        }
        if (s[i] == '7')
        {
            ct += 3;
        }
        if (s[i] == '8')
        {
            ct += 7;
        }
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
