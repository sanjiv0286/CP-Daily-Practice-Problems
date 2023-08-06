// TLE ON TEST 9
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

#define forn(i, n) for (int i = 0; i < n; i++)
// #define forn(i,n) for (const int &n : numbers)
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define DEP(i, b, a) for (int i = b; i >= a; i--)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll n, m;
    cin >> n >> m;
    {
        ll sum = 0;
        if (n < m)
        {
            REP(i, n, m)
            {
                sum = sum + i;
            }
        }
        if (n > m)
        {
            REP(i, m, n)
            {
                sum = sum + i;
            }
        }
        cout << sum << "\n";
    }

    {
        ll es = 0;
        ll os = 0;
        if (n < m)
        {
            REP(i, n, m)
            {
                if (i % 2 == 0)
                {
                    es = es + i;
                }
                else
                {
                    os = os + i;
                }
            }
        }
        if (n > m)
        {
            REP(i, m, n)
            {
                if (i % 2 == 0)
                {
                    es = es + i;
                }
                else
                {
                    os = os + i;
                }
            }
        }
        cout << es << "\n";
        cout << os << "\n";
    }

    return 0;
}

// =============================================================
//// TLE ON TEST 4
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
//     ll n, m;
//     cin >> n >> m;

//     ll sum = 0;
//     ll es = 0;
//     ll os = 0;
//     if (n < m)
//     {
//         REP(i, n, m)
//         {
//             sum = sum + i;
//             if (i % 2 == 0)
//             {
//                 es = es + i;
//             }
//             else
//             {
//                 os = os + i;
//             }
//         }
//     }
//     if (n > m)
//     {
//         REP(i, m, n)
//         {
//             sum = sum + i;
//             if (i % 2 == 0)
//             {
//                 es = es + i;
//             }
//             else
//             {
//                 os = os + i;
//             }
//         }
//     }
//     cout << sum << "\n";
//     cout << es << "\n";
//     cout << os << "\n";

//     return 0;
// }

// // =============================================================