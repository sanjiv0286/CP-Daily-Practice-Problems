
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
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         int h[n], p[n];
//         forn(i, n)
//         {
//             cin >> h[i];
//         }
//         forn(i, n)
//         {
//             cin >> p[i];
//         }
//         // forn(i, n)
//         // {
//         //     cout << h[i] << " ";
//         // }
//         // cout << endl;
//         // forn(i, n)
//         // {
//         //     cout << p[i] << " ";
//         // }
//         // cout << endl;
//         sort(h, h + n);
//         sort(p, p + n);
//         // forn(i, n)
//         // {
//         //     cout << h[i] << " ";
//         // }
//         // cout << endl;
//         // forn(i, n)
//         // {
//         //     cout << p[i] << " ";
//         // }
//         // cout << endl;

//         int o[n];
//         forn(i, n)
//         {

//             if (h[i] != 0)
//             {
//                 if (h[i] < k)
//                 {
//                     h[i] = 0;
//                 }
//                 else if (h[i] >= k)
//                 {
//                     o[i] = h[i] - k;
//                 }
//             }
//         }
//         forn(i, n)
//         {
//             cout << o[i] << " ";
//         }
//         cout << endl;
//         // forn(i, n)
//         // {
//         //     if (h[i] != 0)
//         //     {
//         //     }
//         // }
//         // k = *min_element(p, p + n);
//     }

//     return 0;
// }
// ===================================================================
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int h[n], p[n];
        forn(i, n)
        {
            cin >> h[i];
        }
        forn(i, n)
        {
            cin >> p[i];
        }
        sort(h, h + n);
        sort(p, p + n);

        int o[n];
        forn(i, n)
        {
            if (h[i] != 0)
            {
                if (h[i] < k)
                {
                    o[i] = 0;
                }
                else if (h[i] >= k)
                {
                    o[i] = h[i] - k;
                }

                // k = *min_element(p, p + n);
            }
                }
        forn(i, n)
        {
            cout << o[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
