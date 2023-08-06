// GOOD LUCK

//    | |      |    k
//   (         |  k
//    | |      |k
//       )     |  k
//    | |   •  |    k

// DATE: 14-01-2023
// TIME: 20-31-21
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)
// #define forn(i,n) for (const int &n : numbers)
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define dep(i, b, a) for (int i = b; i >= a; i--)

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    double r1 = sqrt(sq(a) + sq(b));
    double r2 = sqrt(sq(c) + sq(d));
    // cout << r1 << " " << r2
    //      << "\n";
    if (r1 > r2)
    {
        cout << "ALEX"
             << "\n";
    }
    else if (r1 < r2)
    {
        cout << "BOB"
             << "\n";
    }
    else
    {
        cout << "EQUAL"
             << "\n";
    }
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