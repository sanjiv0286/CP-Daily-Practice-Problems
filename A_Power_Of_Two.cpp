// // GOOD LUCK
// //     | |      |    Ķ
// //    (         |  Ķ
// //     | |      |Ķ
// //        )     |  Ķ
// //     | |   •  |    Ķ

// // DATE: 09-12-2022
// // TIME: 22-55-00
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)

// #define f first
// #define s second
// #define pb push_back
// #define mp make_pair

// #define forn(i, n) for (int i = 0; i < n; i++)
// // #define forn(i,n) for (const int &n : numbers)
// #define REP(i, a, b) for (int i = a; i <= b; i++)
// #define DEP(i, b, a) for (int i = b; i >= a; i--)

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     ll n;
//     cin >> n;
//     double res = log2(n) / log2(2);

//     if ((res - (ll)res) != 0)
//     {
//         cout << "NO" << endl;
//     }
//     else
//     {
//         cout << "YES" << endl;
//     }

//     return 0;
// }

// // ================================================================================
// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     ll t = 1;
//     // cin>>t;

//     while (t--)
//     {
//         ll a;
//         cin >> a;
//         ll flag = 1;
//         for (ll i = a; i > 1; i /= 2)
//         {
//             if (i % 2 != 0)
//             {
//                 cout << "NO\n";
//                 flag = 2;
//                 break;
//             }
//         }
//         if (flag == 1)
//             cout << "YES\n";
//     }
// }

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

    ll n;
    cin >> n;
    double res = log2(n) / log2(2);
    if ((res - (ll)res == 0))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}