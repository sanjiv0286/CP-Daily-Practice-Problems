// // CODE WRITTEN BY SK
// // DATE: 09-11-2022
// // TIME: 21-24-27
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define forn(i, n) for (int i = 1; i <= n; i++)
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     int x, max = 0;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         forn(i, n)
//         {
//             int x;
//             cin >> x;
//         }
//         for (int i = 1; i <= n; i++)
//         {
//             if (i == 1)
//             {
//                 x == max;
//                 if (i > max)
//                 {
//                     max = i;
//                 }
//             }
//         }
//         cout << max << "\n";
//     }

//     return 0;
// }

// CODE WRITTEN BY SK
// DATE: 09-11-2022
// TIME: 22-36-58
#include <iostream>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll m = -1;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            m = max(m, a[i]);
        }
        cout << m << endl;
    }
    return 0;
}
