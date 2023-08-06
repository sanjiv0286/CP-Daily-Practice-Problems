// // GOOD LUCK

// //    | |      |    k
// //   (         |  k
// //    | |      |k
// //       )     |  k
// //    | |   •  |    k

// // DATE: 26-01-2023
// // TIME: 20-22-05
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define f first
// #define s second
// #define pb push_back
// #define mp make_pair

// #define forn(i, n) for (int i = 0; i < n; i++)
// // #define forn(i,n) for (const int &n : numbers)
// #define rep(i, a, b) for (int i = a; i <= b; i++)
// #define dep(i, b, a) for (int i = b; i >= a; i--)

// void solve()
// {
//     int a, b, c, d;
//     cin >> a >> b >> c >> d;

//     // rep(i, a, b)
//     // {
//     //     cout << i;
//     // }
//     // // cout << endl;
//     // rep(i, c, d)
//     // {
//     //     cout << i;
//     // }
//     // cout << endl;

//     int count = 0;
//     for (int i = min(a, c); i <= max(b, d); i++)
//     {
//         if ((i >= a && i <= b) || (i >= c && i <= d))
//         {
//             count++;
//         }
//     }
//     cout << count << endl;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }
// ================================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        set<ll> s;
        for (ll i = a; i <= b; i++)
        {
            s.insert(i);
        }
        for (ll i = c; i <= d; i++)
        {
            s.insert(i);
        }
        cout << s.size();
        cout << endl;
    }
}