// // DATE: 09-06-2023
// // TIME: 14-41-58
// #include <bits/stdc++.h>
// #include <unordered_set>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// int gcd(int a, int b)
// {
//     while (b != 0)
//     {
//         int rem = a % b;
//         a = b;
//         b = rem;
//     }
//     return a;
// }
// bool palindrome(int n)
// {
//     string s = to_string(n);
//     string s1 = s;
//     reverse(s.begin(),s.end());
//     if (s == s1)
//     {
//         return true;
//     }
//     return false;
// }

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     forn(i, n)
//     {
//         cin >> v[i];
//     }
//     int ans = 0;
//     forn(i, n)
//     {
//         forn(j, n)
//         {
//             int num = v[i] ^ v[j];
//             if (palindrome(num) == true)
//             {
//                 ans++;
//             }
//         }
//     }
//     cout << ans << endl;
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

// ****************************************************************
// *****************************TLE************************************

// #include <bits/stdc++.h>
// using namespace std;

// #define forn(i, n) for (int i = 0; i < n; i++)
// #define ll long long int
// #define all(x) x.begin(), x.end()
// #define Pi 3.1415926535897932384626
// #define vin(v)        \
//     for (auto &x : v) \
//     cin >> x
// #define deb(v) cout << #v << " " << v << "\n"
// #define vout(v)           \
//     for (auto x : v)      \
//         cout << x << " "; \
//     cout << endl
// #define deb2(v, k) cout << #v << " " << v << "\n" \<< #k << " " << k << "\n"

// vector<ll> p;
// bool check(ll n)
// {
//     ll n1 = n;
//     ll res = 0;
//     while (n)
//     {
//         res = res * 10 + n % 10;
//         n /= 10;
//     }
//     return res == n1;
// }

// // bool check(ll n)
// // {
// //     string s = to_string(n);
// //     string s1 = s;
// //     reverse(s.begin(), s.end());
// //     if (s == s1)
// //     {
// //         return true;
// //     }
// //     return false;
// // }

// void WA()
// {
//     for (ll i = 0; i < (1 << 15); i++)
//     {
//         if (check(i))
//         {
//             p.push_back(i);
//         }
//     }
//     ll n, i, j, k;
//     cin >> n;
//     vector<ll> v(n);
//     vin(v);
//     unordered_map<ll, ll> mp;
//     // unordered_set<ll> s;
//     for (auto x : v)
//     {
//         mp[x]++;
//         // s.insert(x);
//     }
//     // ll res = 0;
//     // for (auto x : s)
//     // {
//     //     for (auto y : p)
//     //     {
//     //         ll val = (x ^ y);
//     //         if (mp[val] && val == x)
//     //         {
//     //             res += (mp[val] * (mp[val] + 1));
//     //         }
//     //         else if (mp[val])
//     //         {
//     //             res += mp[x] * mp[val];
//     //         }
//     //     }
//     // }
//     ll ans = 0;
//     forn(i, n)
//     {
//         forn(j, p.size() - 1)
//         {
//             if (v[i] ^ p[j] <= v[i])
//                 continue;
//             if (mp.find(v[i] ^ p[j]) != mp.end())
//             {
//                 ans += mp[v[i] ^ p[j]];
//             }
//         }
//     }
//     for (auto it : mp)
//     {
//         ans += ((long long)it.second * (it.second + 1)) / 2;
//     }
//     cout << ans << endl;
//     // cout << res / 2 << endl;
//     // return;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0), cin.tie(0);
//     ll t = 1;
//     cin >> t;
//     for (ll i = 1; i <= t; i++)
//         WA();
// }

// **************************************************************

#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define F first
#define S second
#define dbl double
#define pb push_back
#define ll long long int
long long int mod = 1000000007;
#define all(x) x.begin(), x.end()
#define Pi 3.1415926535897932384626

#define vin(v)        \
    for (auto &x : v) \
    cin >> x
#define deb(v) cout << #v << " " << v << "\n"
#define vout(v)           \
    for (auto x : v)      \
        cout << x << " "; \
    cout << endl
#define deb2(v, k) cout << #v << " " << v << "\n" \<< #k << " " << k << "\n"

typedef tree<long long int, null_type, less<long long int>, rb_tree_tag, tree_order_statistics_node_update> sat;
typedef tree<long long int, null_type, less_equal<long long int>, rb_tree_tag, tree_order_statistics_node_update> multisat;

vector<ll> p;
bool check(ll n)
{
    ll n1 = n;
    ll res = 0;
    while (n)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res == n1;
}

void WA()
{
    ll n, i, j, k;
    cin >> n;
    vector<ll> v(n);
    vin(v);
    unordered_map<ll, ll> mp;
    unordered_set<ll> s;
    for (auto x : v)
    {
        mp[x]++;
        s.insert(x);
    }
    ll res = 0;
    for (auto x : s)
    {
        for (auto y : p)
        {
            ll val = (x ^ y);
            if (    mp[val] && val == x)
            {
                res += (mp[val] * (mp[val] + 1));
            }
            else if (mp[val])
            {
                res += mp[x] * mp[val];
            }
        }
    }
    cout << res / 2 << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    ll t = 1;
    cin >> t;
    for (ll i = 0; i < (1 << 15); i++)
    {
        if (check(i))
        {
            p.pb(i);
        }
    }
    // cout << p.size() << endl;
    // vout(p);
    for (ll i = 1; i <= t; i++)
        WA();
}
