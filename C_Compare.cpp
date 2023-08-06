// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {

//     string a, b;
//     cin >> a >> b;
//     ll m = min(a.size(), b.size());

//     string s;
//     ll x = 0;

//     for (ll i = 0; i < m; i++)
//     {
//         if (a[i] != b[i])
//         {
//             if (int(a[i]) < int(b[i]))
//             {
//                 s = a;
//                 break;
//             }
//             else
//             {
//                 s = b;
//                 break;
//             }
//         }
//         else if (a[i] == b[i])
//         {

//             x++;
//         }
//     }

//     if (x == m)
//     {
//         if (a.size() < b.size())
//         {
//             s = a;
//         }
//         else
//         {
//             s = b;
//         }
//     }

//     cout << s << endl;
// }

//-----------------------------------------------------------------------------------------------------

// GOOD LUCK
// DATE: 20-11-2022
// TIME: 12-55-45
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)

//#define f first
//#define s second
//#define pb push_back
//#define mp make_pair

//#define forn(i, n) for (int i = 0; i < n; i++)
//#define forn(i,n) for (const int &n : numbers)
//#define REP(i,a,b) for (int i = a; i <= b; i++)
//#define DEP(i, b, a) for (int i = b; i >= a; i--)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    string a, b;
    cin >> a >> b;
    ll m = min(a.size(), b.size());

    string s;
    ll x = 0;

    for (ll i = 0; i < m; i++)
    {
        if (a[i] != b[i])
        {
            if (int(a[i]) < int(b[i]))
            {
                s = a;
                break;
            }
            else
            {
                s = b;
                break;
            }
        }
        else if (a[i] == b[i])
        {

            x++;
        }
    }

    if (x == m)
    {
        if (a.size() < b.size())
        {
            s = a;
        }
        else
        {
            s = b;
        }
    }

    cout << s << endl;

    return 0;
}