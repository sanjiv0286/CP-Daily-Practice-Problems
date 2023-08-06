// // GOOD LUCK

// //    | |      |    k
// //   (         |  k
// //    | |      |k
// //       )     |  k
// //    | |   •  |    k

// // DATE: 08-01-2023
// // TIME: 20-40-49
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

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         forn(i, n)
//         {
//             cin >> arr[i];
//         }
//     }

//     // string s;
//     // getline(cin, s);
//     // cin.ignore();

//     return 0;
// }

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t; // read the number of test cases

    while (t--)
    { // repeat t times
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n); // sort the array in ascending order

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == sum)
            {
                cout << "NO" << endl;
                break;
            }
            sum += a[i];
        }

        if (sum != 0)
        { // if the sum is not 0, then the array is beautiful
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
