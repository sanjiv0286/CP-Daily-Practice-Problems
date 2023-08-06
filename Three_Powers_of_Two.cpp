// // ************************* MTRL ****************************************
// // GOOD LUCK
// //     | |      |    k
// //    (         |  k
// //     | |      |k
// //        )     |  k
// //     | |   •  |    k

// // DATE: 27-01-2023
// // TIME: 00-14-31
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
//     int ct = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == '1')
//             ct++;
//     }
//     // exception cases
//     if (s == "1" || s == "10")
//     {
//         cout << "NO" << endl;
//     }
//     else if (ct <= 3)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
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

// DATE: 26-01-2023
// TIME: 22-23-39
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

bool sum(int num)
{
    for (int i = 0; i < 32; i++)
    {
        for (int j = i; j < 32; j++)
        {
            for (int k = j; k < 32; k++)
            {
                if (pow(2, i) + pow(2, j) + pow(2, k) == num)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int num = stoi(s, nullptr, 2);
    cout<<num;
    if (sum(num)==true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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