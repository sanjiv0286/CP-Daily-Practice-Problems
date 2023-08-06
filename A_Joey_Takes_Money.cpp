// ek bar jab tum kisi logic ko soch lete ho aur tumhe bad me jake pata chalta hai ki
// yah to ban hi nhi  raha aur tum use banane ka try kr rhe aur fas chuke ho
// to bapas se suru se us ques ko dusre logic se sochne ka bhi try kr liya karo

// =======================================================================
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

// void money(int x, int y, vector<int> v, int res, int sum, int mul, int n)
// {
//     x = *min_element(v.rbegin(), v.rbegin() + 2);
//     y = *max_element(v.rbegin(), v.rbegin() + 2);
//     // cout << x << " " << y << endl;
//     mul = x * y;
//     v[n - 2] = 1;
//     v[n - 1] = mul;
//     forn(i, n)
//     {
//         cout << v[i];
//     }
//     cout << "\n";
//     int w, z, mul2;
//     sort(v.rbegin(), v.rbegin() + 2);
//     w = *min_element(v.rbegin(), v.rbegin() + 2);
//     z = *max_element(v.rbegin(), v.rbegin() + 2);
//     mul2 = w * z;
//     v[n - 2] = 1;
//     v[n - 1] = mul2;
//     forn(i, n)
//     {
//         cout << v[i];
//     }
//     cout << "\n";
//     forn(i, n)
//     {
//         sum = sum + v[i];
//     }
//     res = sum * 2022;
//     // cout << res << "\n";
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, x, y, mul, sum = 0, res;
//         cin >> n;
//         // int arr[n];
//         // forn(i, n)
//         // {
//         //     cin >> arr[i];
//         // }
//         vector<int> v;
//         forn(i, n)
//         {
//             int a;
//             cin >> a;
//             v.push_back(a);
//             // cin >> v[i];
//         }
//         sort(v.begin(), v.end());
//         y = *max_element(v.rbegin(), v.rbegin() + 2);
//         forn(i, n)
//         {
//             if (v[n - 1] == y && v[i] == 1)
//             {
//                 money(x, y, v, res, sum, mul, n);
//             }
//         }

//         cout << "\n";
//     }

//     return 0;
// }
// =========================================================================

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

#define forn(i, n) for (ll i = 0; i < n; i++)
// #define forn(i,n) for (const int &n : numbers)
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define DEP(i, b, a) for (int i = b; i >= a; i--)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t, res;
    cin >> t;
    while (t--)
    {

        ll n;
        cin >> n;
        ll arr[n];
        forn(i, n)
        {
            cin >> arr[i];
        }
        ll mul = 1;
        forn(i, n)
        {
            mul *= arr[i];
        }
        res = mul + (n - 1);
        cout << 2022 * res << "\n";
    }

    return 0;
}

// ==================================================