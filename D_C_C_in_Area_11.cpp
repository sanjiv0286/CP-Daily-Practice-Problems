// // DATE: 02-06-2023
// // TIME: 19-03-22
// #include <bits/stdc++.h>
// #include <unordered_set>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;
// const int N = 1e5 + 10;

// void solve()
// {
//     int n, w;
//     cin >> n >> w;
//     vector<int> v(n);
//     forn(i, n)
//     {
//         cin >> v[i];
//     }
//     sort(all(v));
//     int sum = 0;
//     // int c=w;
//     // vector<int>v2(c);
//     int min = *min_element(v.begin(), v.end());
//     if (w < min)
//     {
//         cout << -1;
//     }
//     else
//     {
//         cout << "YES";
//     }
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
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n, W;
    cin >> n >> W;

    vector<int> weights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }

    sort(weights.begin(), weights.end());

    int min_weight = (W + 1) / 2;
    int current_weight = 0;
    vector<int> selected_indices;

    for (int i = 0; i < n; i++)
    {
        if (weights[i] >= min_weight && weights[i] <= W)
        {
            cout << "1\n" << i + 1 << endl;
            return;
        }

        current_weight += weights[i];
        selected_indices.push_back(i + 1);

        if (current_weight >= min_weight && current_weight <= W)
        {
            cout << selected_indices.size() << endl;
            for (int index : selected_indices)
            {
                cout << index << " ";
            }
            cout << endl;
            return;
        }

        if (current_weight > W)
        {
            cout << "-1" << endl;
            return;
        }
    }

    cout << "-1" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
