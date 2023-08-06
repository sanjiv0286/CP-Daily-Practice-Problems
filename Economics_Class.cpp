// CODE WRITTEN BY SK
// DATE: 04-11-2022
// TIME: 12-37-15
#include <bits/stdc++.h>
using namespace std;
#define ll long long
// #define forn(i, n) for (int i = 0; i < n; i++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        int s[n], d[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == d[i])
            {
                c++;
            }
        }
        cout << c << "\n";
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int ar1[n];
//         int ar2[n];
//         for (int i = 0; i < n; i++)
//             cin >> ar1[i];
//         for (int i = 0; i < n; i++)
//             cin >> ar2[i];
//         int c = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (ar2[i] == ar1[i])
//                 c++;
//         }
//         cout << c << "\n";
//     }
//     // your code goes here
//     return 0;
// }
