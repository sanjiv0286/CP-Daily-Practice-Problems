
// // GOOD LUCK

// //     | |      |    Ķ
// //    (         |  Ķ
// //     | |      |Ķ
// //        )     |  Ķ
// //     | |   •  |    Ķ  •

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

// #define forn(i, n) for (ll i = 0; i < n; i++)
// // #define forn(i,n) for (const int &n : numbers)
// #define REP(i, a, b) for (int i = a; i <= b; i++)
// #define DEP(i, b, a) for (int i = b; i >= a; i--)

// void sanjiv()
// {
//     ll n, res;
//     cin >> n;
//     ll a[n];
//     forn(i, n)
//     {
//         cin >> a[i];
//     }
//     // forn(i, n)
//     // {
//     //     cout << a[i]<<" "<<"\n";
//     // }
//     sort(a, a + n);
//     ll min = 0, max = 0;
//     ll x = *min_element(a, a + n);
//     ll y = *max_element(a, a + n);
//     forn(i, n)
//     {
//         if (a[i] == x)
//         {
//             min++;
//         }
//         else if (a[i] == y)
//         {
//             max++;
//         }
//     }

//     // forn(i, n)
//     // {
//     if (a[0] == a[n - 1])
//     {
//         cout << n * (n - 1) << "\n";
//         return;
//     }
//     // }
//     res = min * max * 2;
//     cout << res << "\n";
//     return;
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
//         sanjiv();
//     }

//     return 0;
// }

// =========================================================================

// GOOD LUCK

//     | |      |    Ķ
//    (         |  Ķ
//     | |      |Ķ
//        )     |  Ķ
//     | |   •  |    Ķ  •

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

void sanjiv()
{
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
        ll n, res;
        cin >> n;
        ll a[n];
        forn(i, n)
        {
            cin >> a[i];
        }
        // forn(i, n)
        // {
        //     cout << a[i]<<" "<<"\n";
        // }
        sort(a, a + n);
        ll min = 0, max = 0;
        ll x = *min_element(a, a + n);
        ll y = *max_element(a, a + n);
        forn(i, n)
        {
            if (a[i] == x)
            {
                min++;
            }
            else if (a[i] == y)
            {
                max++;
            }
        }

        // forn(i, n)
        // {
        if (a[0] == a[n - 1])
        {
            cout << n * (n - 1) << "\n";
        }
        // }
        else
        {
            res = min * max * 2;
            cout << res << "\n";
        }
    }

    return 0;
}