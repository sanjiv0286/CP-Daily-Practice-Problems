// // GOOD LUCK
// //     | |      |    Ķ
// //    (         |  Ķ
// //     | |      |Ķ
// //        )     |  Ķ
// //     | |   •  |    Ķ

// // DATE: 09-12-2022
// // TIME: 22-55-00
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)

// #define f first
// #define s second
// #define pb push_back
// #define mp make_pair

// #define forn(i, n) for (int i = 0; i < n; i++)
// // #define forn(i,n) for (const int &n : numbers)
// #define REP(i, a, b) for (int i = a; i <= b; i++)
// #define DEP(i, b, a) for (int i = b; i >= a; i--)

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         int n;
//         cin >> n;
//         int x = -1;
//         int y = 0;
//         for (int i = 0; i < n; i++)
//         {
//             int a;
//             cin >> a;
//             // cout << a << "\n";
//             x &= a;
//             y |= a;
//             // cout << x << " " << y << "\n";
//         }
//         cout << y - x << '\n';
//         // cout << "*********" << '\n';
//     }
//     return 0;
// }

// ==================================================================

// GOOD LUCK
//     | |      |    Ķ
//    (         |  Ķ
//     | |      |Ķ
//        )     |  Ķ
//     | |   •  |    Ķ

// DATE: 09-12-2022
// TIME: 22-55-00
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (ll i = 0; i < n; i++)
// #define forn(i,n) for (const int &n : numbers)
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define DEP(i, b, a) for (int i = b; i >= a; i--)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    // ***********************************
    // int x = (1 & 0);
    // int y=(1|0);
    // cout << x<<"\n";
    // cout << y<<"\n";
    // cout << y-x<<"\n";
    // ****************************************
    // int x = (1 & 9);
    // int y = (1 | 9);
    // cout << x << "\n";
    // cout << y << "\n";
    // cout << y - x << "\n";
    // ****************************************

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        forn(i, n)
        {
            cin >> a[i];
        }
        ll x = a[0], y = a[0];
        for (ll i = 0; i < n; i++)
        {
            x &= a[i];
            y |= a[i];
        }
        cout << y - x << "\n";
    }

    return 0;
}