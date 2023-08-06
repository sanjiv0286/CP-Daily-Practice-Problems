// // DATE: 03-06-2023
// // TIME: 03-44-07
// #include <bits/stdc++.h>
// #include <unordered_set>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     unordered_map<char, int> m;
//     for (auto &x : s)
//     {
//         m[x]++;
//     }
//     int ct = 0;
// if (n == 1)
// {
//     cout << "YES";
//     return;
// }
//     for (auto x : m)
//     {
//         if (x.second > 0)
//         {
//             ct++;
//         }
//     }
//     if (ct == n)
//     {
//         cout << "No";
//     }
//     else
//         cout << "Yes";
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     // ll t = 1;
//     // cin >> t;
//     // while (t--)
//     // {
//     solve();
//     // }

//     return 0;
// }
// ================================================

// DATE: 03-06-2023
// TIME: 04-00-45
#include <bits/stdc++.h>
#include <unordered_set>
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
    string s;
    cin >> s;
    unordered_set<int> st;
    for (auto x : s)
    {
        st.insert(x);
    }
    if (n == 1)
    {
        cout << "YES";
        return;
    }
    if (st.size() == n)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
