// //******************** wrong answer on test 3*****************************
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)

// //#define f first
// //#define s second
// //#define pb push_back
// //#define mp make_pair

// //#define forn(i, n) for (int i = 0; i < n; i++)
// //#define forn(i,n) for (const int &n : numbers)
// //#define REP(i,a,b) for (int i = a; i <= b; i++)
// //#define DEP(i, b, a) for (int i = b; i >= a; i--)

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     if (t == 6)
//     {
//         cout << 9;
//     }
//     else if (t == 2)
//     {
//         cout << 1;
//     }
//     else if (t == 5)
//     {
//         cout << 2;
//     }
//     else if (t == 4)
//     {
//         cout << 4;
//     }
//     else if (t == 3)
//     {
//         cout << 7;
//     }
//     else if (t == 7)
//     {
//         cout << 8;
//     }

//     return 0;
// }
// =========================================================================
// ========================================================================

// GOOD LUCK
//     | |      |    Ķ
//    (         |  Ķ
//     | |      |Ķ
//        )     |  Ķ
//     | |   •  |    Ķ

// DATE: 09-12-2022
// TIME: 22-55-00
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)
// #define forn(i,n) for (const int &n : numbers)
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define DEP(i, b, a) for (int i = b; i >= a; i--)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int a[] = {1, 7, 4, 5, 3, 2, 9, 6, 0, 8};
    int c[] = {2, 3, 4, 5, 5, 5, 6, 6, 6, 7};
    int n;
    cin >> n;
    string s = "";
    while (n > 3)
    {
        s += '1';
        n -= 2;
    }
    if (n == 2)
    {
        s += '1';
        // cout << "1";
    }
    else
        s = '7' + s;
    cout << s;
    return 0;
}