
// DATE: 07-06-2023
// TIME: 20-19-13
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
    int n, m;
    cin >> n >> m;
    int mul = n * m;
    int ct = 0;
    forn(i, mul)
    {
        if (n > m)
        {
            n--;
            m++;
            if (n == m)
            {
                // cout << "YES" << endl;
                ct++;
            }
            // else
            // cout << "NO" << endl;
            // return NO;
        }
        else if (n == m)
        {
            // cout << "YES" << endl;
            ct++;
        }
        else
        {
            n += 3;
            m--;
            if (n == m)
            {
                // cout << "YES" << endl;
                ct++;
            }
            // else
            //     cout << "NO" << endl;
        }
    }
    if (ct > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
