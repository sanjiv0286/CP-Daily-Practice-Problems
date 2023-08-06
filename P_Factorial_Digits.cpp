
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

// #define forn(i, n) for (ll i = 0; i < n; i++)
// // #define forn(i,n) for (const int &n : numbers)
// #define REP(i, a, b) for (ll i = a; i <= b; i++)
// #define DEP(i, b, a) for (int i = b; i >= a; i--)

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);

//     ll n;
//     cin >> n;
//     ll fac = 1;
//     // set<int> s;
//     REP(i, 1, n)
//     {
//         fac = fac * i;
//     }
//     string str = to_string(fac);

//     // cout << fac;
//     ll c = 0;
//     forn(i, str.size())
//     {
//         c++;
//     }
//     cout << "Number of digits of " << n << "! is " << c;

//     return 0;
// }
// =================================================================
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double num, result = 0;
    cin >> num;
    for (int i = 2; i <= num; i++)
    {
        result += log10(i);
        // cout << result << "\n";
    }
    cout << "Number of digits of " << num << "! is " << (int)result + 1 << endl;
}