//  WRONG
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

// #define forn(i, n) for (ll i = 0; i < n; i++)

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, m;
//         cin >> n >> m;
//         // ll a[n];
//         // ll b[m];

//         // forn(i, n)
//         // {
//         //     cin >> a[i];
//         // }
//         // forn(j, m)
//         // {
//         //     cin >> b[j];
//         // }
//         // sort(a, a + n);
//         // sort(b, b + n);
//         vector<ll> a(n);
//         forn(i, n)
//         {
//             cin >> a[i];
//         }

//         vector<ll> b(m);
//         forn(i, m)
//         {
//             cin >> b[i];
//         }
//         sort(a.begin(), a.end());
//         sort(b.rbegin(), b.rend());
//         ll minimum = min(n, m);
//         long long ans = 0;
//         forn(i, minimum)
//         {
//             ans += b[i];
//             a[i] = b[i];
//         }
//         for (ll i = minimum; i < n; i++)
//         {
//             ans += a[i];
//         }

//         cout << ans << "\n";
//     }

//     return 0;
// }

// ============= RIGHT ===============================================

// // GOOD LUCK
// //     | |      |    k
// //    (         |  k
// //     | |      |k
// //        )     |  k
// //     | |   •  |    k

// // DATE: 09-12-2022
// // TIME: 22-55-00
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()
// #define pb push_back

// #define forn(i, n) for (auto i = 0; i < n; i++)

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;

//         vector<ll> a(n);
//         forn(i, n)
//         {
//             cin >> a[i];
//         }

//         vector<ll> b(m);
//         forn(i, m)
//         {
//             cin >> b[i];
//         }
//         sort(all(a));
//         ll sum = 0;
//         int cnt = 0;
//         for (int i = 0; i < m; i++)
//         {
//             a.erase(a.begin());
//             a.pb(b[i]);
//             sort(all(a));
//         }
//         for (auto u : a)
//         {
//             sum += u;
//         }
//         cout << sum << endl;
//     }

//     return 0;
// }
