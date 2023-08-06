// // ************************** TLE  O(T*2N) = 2*10^10  ********************************************
// // GOOD LUCK
// //    | |      |    k
// //   (         |  k
// //    | |      |k
// //       )     |  k
// //    | |   •  |    k

// // DATE: 15-01-2023
// // TIME: 11-57-52
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
//     int n;
//     cin >> n;
//     int a[2 * n];

//     for (int i = 0; i < 2 * n; i++)
//         cin >> a[i];

//     sort(a, a + 2 * n);

//     for (int i = 0; i < (2 * n); i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     int min_diff = INT_MAX;

//     for (int i = 0; i < 2 * n; i++)
//     {
//         rotate(a, a + 1, a + 2 * n);
//         // for (int i = 0; i < 2 * n; i++)
//         // {
//         //     cout << a[i];
//         // }
//         // cout << endl;
//         int min_elem = *min_element(a, a + n);
//         int max_elem = *max_element(a, a + n);
//         int diff = max_elem - min_elem;
//         min_diff = min(min_diff, diff);
//     }
//     // cout << endl;
//     cout << min_diff << endl;
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

// ====================================================================================

// GOOD LUCK

//    | |      |    k
//   (         |  k
//    | |      |k
//       )     |  k
//    | |   •  |    k

// DATE: 15-01-2023
// TIME: 12-44-24
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
    ll n;
    cin >> n;
    ll a[n];
    ll b[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    ll minDifference = LONG_MAX;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(a[i]);
        v.push_back(b[i]);
    }
    sort(v.begin(), v.end());

    // for (int i = 0; i < (2 * n); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    for (int i = 0; i <= n; i++)
    {
        ll difference = v[n - 1 + i] - v[i];
        // cout << difference << " ";
        minDifference = min(minDifference, difference);
        // cout << minDifference << " ";
        // cout << endl;
    }

    cout << minDifference << endl;
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