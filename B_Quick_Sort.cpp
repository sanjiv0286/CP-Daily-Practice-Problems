// // GOOD LUCK

// //    | |      |    k
// //   (         |  k
// //    | |      |k
// //       )     |  k
// //    | |   •  |    k

// // DATE: 05-01-2023
// // TIME: 20-43-32
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define f first
// #define s second
// #define pb push_back
// #define mp make_pair

// #define forn(i, n) for (int i = 1; i < n; i++)
// // #define forn(i,n) for (const int &n : numbers)
// #define rep(i, a, b) for (int i = a; i <= b; i++)
// #define dep(i, b, a) for (int i = b; i >= a; i--)

// // void already_sorted(vector<int> v)
// // {
// // }

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
//         vector<int> v(n);
//         forn(i, n)
//         {
//             cin >> v[i];
//         }
//         // if (already_sorted)
//         // {
//         //     cout << 0 << "\n";
//         // }
//         // forn(i, n)
//         // {
//         //     cout << v[i] << " ";
//         // }
//         sort(v.begin(), v.end());
//         forn(i, n)
//         {
//             int max = *max_element(v.begin(), v.end());
//             cout << max;
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int t;
int n, k;
int p[100005];

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        int res = 0;
        while (1)
        {
            int cnt = 0;
            // Check if the permutation is already sorted
            for (int i = 0; i < n - 1; i++)
            {
                if (p[i] > p[i + 1])
                {
                    cnt++;
                }
            }
            if (cnt == 0)
            {
                // The permutation is already sorted
                break;
            }
            // Select k elements to be removed and sorted
            int min_idx = 0;
            for (int i = 1; i < k; i++)
            {
                if (p[i] < p[min_idx])
                {
                    min_idx = i;
                }
            }
            // Remove and sort the selected elements
            for (int i = min_idx; i < n - k; i++)
            {
                p[i] = p[i + k];
            }
            sort(p + n - k, p + n);
            res++;
        }
        cout << res << endl;
    }
    return 0;
}
