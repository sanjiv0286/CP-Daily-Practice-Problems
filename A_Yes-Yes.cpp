// GOOD LUCK
// DATE: 18-11-2022
// TIME: 20-24-24
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)

#define f first
// #define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)
//#define forn(i,n) for (const int &n : numbers)
#define IN(i, a, b) for (int i = a; i <= b; i++)
#define DE(i, b, a) for (int i = b; i >= a; i--)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        ll j, k;
        string s;
        cin >> s;
        for (j = 0; j < s.length(); j++)
        {
            char x = s[j];
            if (x != 'Y' && x != 'e' && x != 's')
            {
                cout << "NO\n";
            }
        }
        return 0;
    }

// string p = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYe";
// if (str == "Yess" || str == "YES" || str == "se")
// {
//     cout << "NO"
//          << "\n";
// }
// else if (str == p.substr(0, 1) || str == p.substr(0, 2) || str == p.substr(0, 3) || str == p.substr(0, 4) || str == p.substr(0, 5) || str == p.substr(0, 6) || str == p.substr(0, 7) || str == p.substr(0, 8) || str == p.substr(0, 9) || str == p.substr(0, 10) || str == p.substr(0, 11) || str == p.substr(0, 12) || str == p.substr(0, 13) || str == p.substr(0, 14) || str == p.substr(0, 15) || str == p.substr(0, 16) || str == p.substr(0, 17) || str == p.substr(0, 18) || str == p.substr(0, 19) || str == p.substr(0, 20) || str == p.substr(0, 21) || str == p.substr(0, 22) || str == p.substr(0, 23) || str == p.substr(0, 24) || str == p.substr(0, 25) || str == p.substr(0, 26) || str == p.substr(0, 27) || str == p.substr(0, 28) || str == p.substr(0, 29) || str == p.substr(0, 30) || str == p.substr(0, 31) || str == p.substr(0, 32) || str == p.substr(0, 33) || str == p.substr(0, 34) || str == p.substr(0, 35) || str == p.substr(0, 36) || str == p.substr(0, 37) || str == p.substr(0, 38) || str == p.substr(0, 39) || str == p.substr(0, 40) || str == p.substr(0, 41) || str == p.substr(0, 42) || str == p.substr(0, 43) || str == p.substr(0, 44) || str == p.substr(0, 45) || str == p.substr(0, 46) || str == p.substr(0, 47) || str == p.substr(0, 48) || str == p.substr(0, 49) || str == p.substr(0, 50))
// {
//     cout << "YES"
//          << "\n";
// }
// else if (str != p.substr(0, 1) || str != p.substr(0, 2) || str != p.substr(0, 3) || str != p.substr(0, 4) || str != p.substr(0, 5) || str != p.substr(0, 6) || str != p.substr(0, 7) || str != p.substr(0, 8) || str != p.substr(0, 9) || str != p.substr(0, 10) || str != p.substr(0, 11) || str != p.substr(0, 12) || str != p.substr(0, 13) || str != p.substr(0, 14) || str != p.substr(0, 15) || str != p.substr(0, 16) || str != p.substr(0, 17) || str != p.substr(0, 18) || str != p.substr(0, 19) || str != p.substr(0, 20) || str != p.substr(0, 21) || str != p.substr(0, 22) || str != p.substr(0, 23) || str != p.substr(0, 24) || str != p.substr(0, 25) || str != p.substr(0, 26) || str != p.substr(0, 27) || str != p.substr(0, 28) || str != p.substr(0, 29) || str != p.substr(0, 30) || str != p.substr(0, 31) || str != p.substr(0, 32) || str != p.substr(0, 33) || str != p.substr(0, 34) || str != p.substr(0, 35) || str != p.substr(0, 36) || str != p.substr(0, 37) || str != p.substr(0, 38) || str != p.substr(0, 39) || str != p.substr(0, 40) || str != p.substr(0, 41) || str != p.substr(0, 42) || str != p.substr(0, 43) || str != p.substr(0, 44) || str != p.substr(0, 45) || str != p.substr(0, 46) || str != p.substr(0, 47) || str != p.substr(0, 48) || str != p.substr(0, 49) || str != p.substr(0, 50))
// {
//     cout << "NO"
//          << "\n";
// }
// isSubstring(s1, s2);
// cout << p.substr();

// cout << str.substr() << "\n";

// else if (str == str.substr())
// {
//     cout << "YES"
//          << "\n";
// }

// forn(i, 50)
// {
//     str == str.substr(0, i);
// }
