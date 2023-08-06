// // GOOD LUCK
// //     | |      |    k
// //    (         |  k
// //     | |      |k
// //        )     |  k
// //     | |   •  |    k

// // DATE: 08-02-2023
// // TIME: 22-08-18
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

// // #************ KEEP IN MIND ************#
// // READ THE QUESTION PROPERLY [Many times if required]
// // FIRST SOLVE ON PAPER AND GET THE CORRECT APPROACH THEN ONLY START CODING
// //[This will save alot of time as well as lower incorrect submissions]
// // DON'T GET STUCK ON ONE APPROACH [Try to think differently]
// // TRY TO SOLVE SUBPROBLEMS OR FOR N==2,3,4.. FIRST THEN YOU MIGHT START SEEING SOMETHING
// // DON'T REPEAT THE SAME MISTAKES DONE IN PREVIOUS CONTESTS
// // #************ KEEP IN MIND ************#

// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     map<char, ll> mp;
//     for (auto i : s)
//     {
//         mp[i]++;
//     }
//     for (auto i : mp)
//     {
//         if (i.second == 2)
//         {
//             cout << n - 2 << endl;
//             return;
//         }
//     }

//     cout << -1 << "\n";
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

// ===================================================================

// GOOD LUCK
//     | |      |    k
//    (         |  k
//     | |      |k
//        )     |  k
//     | |   •  |    k

// DATE: 09-02-2023
// TIME: 00-07-56
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
#define rep(i, a, b) for (int i = a; i < b; i++)
#define dep(i, b, a) for (int i = b; i >= a; i--)

// #************ KEEP IN MIND ************#
// READ THE QUESTION PROPERLY [Many times if required]
// FIRST SOLVE ON PAPER AND GET THE CORRECT APPROACH THEN ONLY START CODING
//[This will save alot of time as well as lower incorrect submissions]
// DON'T GET STUCK ON ONE APPROACH [Try to think differently]
// TRY TO SOLVE SUBPROBLEMS OR FOR N==2,3,4.. FIRST THEN YOU MIGHT START SEEING SOMETHING
// DON'T REPEAT THE SAME MISTAKES DONE IN PREVIOUS CONTESTS
// #************ KEEP IN MIND ************#

void solve()
{
    int n;
    int flag = 0;
    cin >> n;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    rep(i, 1, s.size())
    {
        if (s[i] == s[i - 1])
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << n - 2 << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
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