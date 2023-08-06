// DATE: 12-04-2023
// TIME: 21-44-10
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    forn(i, n)
    {
        cin >> a[i];
    }
    int s = 0;
    int acc, sr;
    int ct = 0;
    forn(i, n)
    {
        s += a[i];
        acc = s / (i + 1);
        sr = acc * 100;
        if (sr == 100)
        {
            ct++;
        }
    }
    cout << ct << "\n";
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
// ===============================================================

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> runs(n);
//         int count = 0;
//         int total_runs = 0, total_balls = 0;
//         for (int i = 0; i < n; i++) {
//             cin >> runs[i];
//             total_runs += runs[i];
//             total_balls++;
//             if (total_runs * 100 == total_balls * 100) {
//                 count++;
//             }
//         }
//         cout << count << endl;
//     }
//     return 0;
// }
