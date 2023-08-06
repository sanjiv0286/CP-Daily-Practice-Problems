// #include <iostream>
// #include <vector>
// #define ll long long

// using namespace std;

// bool isSubsequence(vector<ll> &v, ll b)
// {
//     ll bitwiseAnd = v[0];
//     for (ll i = 1; i < v.size(); i++)
//     {
//         bitwiseAnd &= v[i];
//     }
//     return bitwiseAnd == b;
// }

// string checkSubsequenceExistence(ll N, ll B, vector<ll> &A)
// {
//     vector<ll> subsequence;
//     for (ll i = 0; i < (1 << N); i++)
//     {
//         subsequence.clear();
//         for (ll j = 0; j < N; j++)
//         {
//             if (i & (1 << j))
//             {
//                 subsequence.push_back(A[j]);
//             }
//         }
//         if (!subsequence.empty() && isSubsequence(subsequence, B))
//         {
//             return "YES";
//         }
//     }
//     return "NO";
// }

// int main()
// {
//     ll T;
//     cin >> T;

//     while (T--)
//     {
//         ll N, B;
//         cin >> N >> B;
//         vector<ll> A(N);
//         for (ll i = 0; i < N; i++)
//         {
//             cin >> A[i];
//         }
// string result = checkSubsequenceExistence(N, B, A);
// cout << result << endl;
//     }

//     return 0;
// }

// // *******************************************************************

// // DATE: 14-06-2023
// // TIME: 20-43-03
// #include <bits/stdc++.h>
// #include <unordered_set>
// using namespace std;

// #define ll long long
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (ll i = 0; i < n; i++)
// #define rep(i, a, b) for (ll i = a; i <= b; i++)
// #define dep(i, b, a) for (ll i = b; i >= a; i--)

// #define prll(x) cout << x << "\n"
// #define vin(v)        \
//     for (auto &x : v) \
//     cin >> x
// // #define vin() for(ll i=0;i<n;i++) cin>>v[i]
// #define vout(v)           \
//     for (auto x : v)      \
//         cout << x << " "; \
//     cout << endl
// // #define vout() for(ll i=0;i<n;i++) cout<<v[i]<<" "
// // #define vout(a,b,v) for(ll i=a;i<b;i++){cout<<v[i]<<" ";}cout<<"\n";
// #define vect(type1, name) vector<type1> name
// #define vectp(type1, type2, name) vector<pair<type1, type2>> name
// #define set(type, name) set<type> name
// #define mpp(type1, type2, name) map<type1, type2> name

// const ll M = 1e9 + 7;
// const ll N = 1e5 + 7;
// #define Pi 3.1415926535897932384626
// // extern ll x;

// ll gcd(ll a, ll b)
// {
//     while (b != 0)
//     {
//         ll rem = a % b;
//         a = b;
//         b = rem;
//     }
//     return a;
// }

// ll lcm(ll a, ll b)
// {
//     return (a * b) / __gcd(a, b);
// }

// ll isPalindrome(string S)
// {
//     string P = S;
//     reverse(P.begin(), P.end());
//     if (S == P)
//         return true;
//     else
//         return false;
// }

// bool check_palindrome(ll n)
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

// ll isprime(ll x)
// {
//     for (ll i = 2; i <= sqrtl(x); i++)
//     {
//         /* code */
//         if (x % i == 0)
//             return false;
//     }

//     return true;
// }

// ll fact(ll n)
// {
//     if ((n == 0) || (n == 1))
//         return 1;
//     else
//         return (((n % M) * (fact(n - 1) % M)) % M);
// }

// string decToBinary(ll n)
// {
//     // Size of an lleger is assumed to be 32 bits
//     string s = "";
//     for (ll i = 31; i >= 0; i--)
//     {
//         ll k = n >> i;

//         if (k & 1)
//             // cout << "1";
//             s = "1" + s;
//         else
//             // cout << "0";
//             s = "0" + s;
//     }
//     reverse(s.begin(), s.end());
//     return s;
// }

// ll sum_of_digits(ll x)
// {
//     ll s = 0;
//     while (x)
//     {
//         s += x % 10;
//         x /= 10;
//     }
//     return s;
// }

// bool isSubsequence(vector<ll> &v, ll b)
// {
//     ll bitwiseAnd = v[0];
//     for (ll i = 1; i < v.size(); i++)
//     {
//         bitwiseAnd &= v[i];
//     }
//     return bitwiseAnd == b;
// }

// void solve()
// {
//     ll n, b;
//     cin >> n >> b;
//     vector<ll> a(n);
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     vector<ll> v;
//     for (ll i = 0; i < (1 << n); i++)
//     {
//         v.clear();
//         for (ll j = 0; j < n; j++)
//         {
//             if (i & (1 << j))
//             {
//                 v.push_back(a[j]);
//             }
//         }
//         if (!v.empty() && isSubsequence(v, b))
//         {
//             cout << "YES\n";
//             return;
//         }
//     }
//     cout << "NO\n";
// }

// ll main()
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

// *************************************************************************

// #include <iostream>
// #include <vector>
// #define ll long long

// using namespace std;

// bool isSubsequence(vector<ll> &v, ll b)
// {
//     ll bitwiseAnd = v[0];
//     for (ll i = 1; i < v.size(); i++)
//     {
//         bitwiseAnd &= v[i];
//     }
//     return bitwiseAnd == b;
// }

// string hello(ll n, ll b, vector<ll> &a)
// {
//     vector<ll> v;
//     for (ll i = 0; i < (1 << n); i++)
//     {
//         v.clear();
//         for (ll j = 0; j < n; j++)
//         {
//             if (i & (1 << j))
//             {
//                 v.push_back(a[j]);
//             }
//         }
//         if (!v.empty() && isSubsequence(v, b))
//         {
//             return "YES";
//         }
//     }
//     return "NO";
// }

// void solve()
// {
//     ll n, b;
//     cin >> n >> b;
//     vector<ll> a(n);
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     string result = hello(n, b, a);
//     cout << result << endl;
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
// *******************************************************************

// DATE: 14-06-2023
// TIME: 20-43-03
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define all(a) a.begin(), a.end()

#define forn(i, n) for (ll i = 0; i < n; i++)
#define rep(i, a, b) for (ll i = a; i <= b; i++)
#define dep(i, b, a) for (ll i = b; i >= a; i--)

#define prll(x) cout << x << "\n"
#define vin(v)        \
    for (auto &x : v) \
    cin >> x
// #define vin() for(ll i=0;i<n;i++) cin>>v[i]
#define vout(v)           \
    for (auto x : v)      \
        cout << x << " "; \
    cout << endl
// #define vout() for(ll i=0;i<n;i++) cout<<v[i]<<" "
// #define vout(a,b,v) for(ll i=a;i<b;i++){cout<<v[i]<<" ";}cout<<"\n";
#define vect(type1, name) vector<type1> name
#define vectp(type1, type2, name) vector<pair<type1, type2>> name
#define set(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n >> b;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool ans = false;
        for (int i = 0; i < (1 << n); i++)
        {
            int temp = -1;
            for (int j = 0; j < n; j++)
            {
                if (i & (1 << j))
                {
                    if (temp == -1)
                    {
                        temp = arr[j];
                    }
                    else
                    {
                        temp &= arr[j];
                    }
                }
            }

            if (temp == b)
            {
                ans = true;
                break;
            }
        }
        if (ans)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}