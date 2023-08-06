
// GOOD LUCK
//     | |      |    k
//    (         |  k
//     | |      |k
//        )     |  k
//     | |   •  |    k

// DATE: 05-02-2023
// TIME: 21-29-12
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

    string s;
    cin >> s;
    forn(i, s.size())
    {
        if (s[i] == '?')
        {
            if (s[s.size() - i - 1] == '?')
            {
                s[i] = 'a';
                s[s.size() - i - 1] = 'a';
            }
            else
            {
                s[i] = s[s.size() - i - 1];
            }
        }
    }
    ll flag = 1;
    forn(i, s.size())
    {
        if (s[i] != s[(s.length()) - i - 1])
        {
            flag = 2;
            break;
        }
    }
    if (flag == 1)
    {
        cout << s << "\n";
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
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// // =========================================================================
// #include <iostream>
// #include <string>
// using namespace std;
// bool check(string word)
// {
//     int size = word.size() / 2; // 4 / 2 = 2    0 1 2
//     bool res = true;
//     for (int i = 0, j = word.size() - 1; i <= size; i++, j--)
//     { // 0  3
//         if (word[i] == word[j] || (word[i] == '?' && word[j] != '?') ||
//             (word[i] != '?' && word[j] == '?') || word == "?")
//         {
//             res = true;
//         }
//         else
//         {
//             res = false;
//             break;
//         }
//     }
//     return res;
// }
// int main()
// {
//     // cout << int(2.5);
//     string word; //  "?bba" "abb?" "?bb?"
//     cin >> word; //
//     int size = word.size() / 2;
//     if (word != "?")
//     { // "?"
//         if (check(word) == true)
//         { // "ab?ba" i =2 j = 2   i <= 2
//             for (int i = 0, j = word.size() - 1; i <= size; i++, j--)
//             {
//                 if (word[i] == '?' && word[j] != '?')
//                 {
//                     word[i] = word[j];
//                 }
//                 else if (word[i] != '?' && word[j] == '?')
//                 {
//                     word[j] = word[i];
//                 }
//                 else if (word[i] == '?' && word[j] == '?')
//                 {
//                     word[i] = 'a';
//                     word[j] = 'a';
//                 }
//             }
//             cout << word << endl;
//         }
//         else
//         {
//             cout << -1 << endl;
//         }
//     }
//     else
//     {
//         cout << "a" << endl;
//     }
// }
