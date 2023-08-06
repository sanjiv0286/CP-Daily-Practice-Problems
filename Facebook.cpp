// // GOOD LUCK

// //    | |      |    k
// //   (         |  k
// //    | |      |k
// //       )     |  k
// //    | |   •  |    k

// // DATE: 18-01-2023
// // TIME: 20-06-58
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define f first
// #define s second
// #define pb push_back
// #define mp make_pair

// #define forn(i, n) for (ll i = 0; i < n; i++)
// // #define forn(i,n) for (const int &n : numbers)
// #define rep(i, a, b) for (int i = a; i <= b; i++)
// #define dep(i, b, a) for (int i = b; i >= a; i--)

// void solve()
// {
//     ll n;
//     cin >> n;
//     // int a[n], b[n];
//     vector<ll> v1;

//     forn(i, n)
//     {
//         int a;
//         cin >> a;
//         v1.push_back(a);
//     }
//     vector<ll> v2;

//     forn(i, n)
//     {
//         int b;
//         cin >> b;
//         v2.push_back(b);
//     }
//     // int max1 = v1[0], max2 = v2[0];
//     int m1 = *max_element(v1.begin(), v1.end());
//     int m2 = *max_element(v2.begin(), v2.end());
//     // sort(v2.begin(), v2.end());
//     // cout << m1 << " " << m2 << "\n";
//     // forn(i, n)
//     // {
//     //     if (v1[i] > max)
//     //     {
//     //         max = a[i];
//     //     }
//     // }
//     // forn(i, n)
//     // {
//     //     if (b[i] > max2)
//     //     {
//     //         max2 = b[i];
//     //     }
//     // }
//     int max_index = -1;

//     if (count(v1.begin(), v1.end(), m1) == 1)
//     {
//         // cout << count(m1) << "\n";

//         forn(i, n)
//         {
//             if (v1[i] == m1)
//             {
//                 cout << i + 1 << "\n";
//             }
//         }
//     }
//     else
//     {
//         forn(i, n)
//         {
//             if (v2[i] == v2[n - 1])
//             {
//                 cout << i + 1 << "\n";
//             }
//         }
//     }
//     // cout << m1 << " " << m2 << "\n";
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
// ==============================================================

// // GOOD LUCK

// //    | |      |    k
// //   (         |  k
// //    | |      |k
// //       )     |  k
// //    | |   •  |    k

// // DATE: 19-01-2023
// // TIME: 00-28-19
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

//     int num;
//     cin >> num;
//     int ajeet[num + 2];
//     int abhay[num + 2];
//     for (int i = 1; i <= num; ++i)
//         cin >> ajeet[i];
//     for (int i = 1; i <= num; ++i)
//         cin >> abhay[i];

//     int max = 0;
//     int max_ind = 0;
//     for (int i = 1; i <= num; ++i)
//     {
//         if (ajeet[i] > max)
//         {
//             max = ajeet[i];
//             max_ind = i;
//         }
//         else if (ajeet[i] == max)
//         {
//             if (abhay[i] > abhay[max_ind])
//             {
//                 max = ajeet[i];
//                 max_ind = i;
//             }
//         }
//     }
//     cout << max_ind << endl;
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
// ============================
// GOOD LUCK

//    | |      |    k
//   (         |  k
//    | |      |k
//       )     |  k
//    | |   •  |    k

// DATE: 18-01-2023
// TIME: 20-06-58
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (ll i = 0; i < n; i++)
// #define forn(i,n) for (const int &n : numbers)
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define dep(i, b, a) for (int i = b; i >= a; i--)

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v1;
    forn(i, n)
    {
        int a;
        cin >> a;
        v1.push_back(a);
    }
    vector<ll> v2;
    forn(i, n)
    {
        int b;
        cin >> b;
        v2.push_back(b);
    }
    int m1 = *max_element(v1.begin(), v1.end());
    int ans = 0;
    int cmt = -1;
    for (int i = 0; i < n; i++)
    {
        if (v1[i] == m1 && cmt < v2[i])
        {
            ans = i + 1;
            cmt = v2[i];
            // cout<<ans<<" "<<cmt<<"\n";
        }
    }
    cout << ans << "\n";
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