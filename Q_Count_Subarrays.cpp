
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
//         int n;
//         cin >> n;
//         int arr[n];
//         forn(i, n)
//         {
//             cin >> arr[i];
//         }
//         int ct = 0;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i; j < n; j++)
//             {
//                 // cout << i << " " << j << "\n";
//                 // sort(arr, arr + n);
//                 if (arr[i + 1] >= arr[j])
//                 {
//                     ct++;
//                     cout << i << " " << j << "\n";
//                 }
//             }
//         }
//         cout << ct << "\n";
//     }

//     return 0;
// }
// ======================================================================
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ct = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                bool non_decreasing = true;
                for (int k = i; k < j; k++)
                {
                    if (arr[k] > arr[k+1])
                    {
                        non_decreasing = false;
                        break;
                    }
                }
                if (non_decreasing)
                {
                    ct++;
                }
            }
        }
        cout << ct << endl;
    }
    return 0;
}
