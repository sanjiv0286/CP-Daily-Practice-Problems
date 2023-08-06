// CODE WRITTEN BY SK
// DATE: 09-11-2022
// TIME: 21-11-51
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 1; i <= n; i++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool b = true;
        ll x = s.size() / 2;
        for (ll i = 0; i < s.size() / 2; i++)
        {
            if (s[i] != s[i + x])
            {
                b = false;
                break;
            }
        }
        if (b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         bool b = true;
//         ll x = s.size() / 2;
//         for (ll i = 0; i < s.size() / 2; i++)
//         {
//             if (s[i] != s[i + x])
//             {
//                 b = false;
//                 break;
//             }
//         }
//         if (b)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }