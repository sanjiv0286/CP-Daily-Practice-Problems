// DATE: 19-06-2023
// TIME: 11-16-16
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define dep(i, b, a) for (int i = b; i >= a; i--)

#define print(x) cout << x << "\n"
#define vin(v)        \
    for (auto &x : v) \
    cin >> x
// #define vin() for(ll i=0;i<n;i++) cin>>v[i]
#define vout(v)           \
    for (auto x : v)      \
        cout << x << " "; \
    cout << endl
// #define vout() for(ll i=0;i<n;i++) cout<<v[i]<<" "
// #define vout(a,b,v) for(int i=a;i<b;i++){cout<<v[i]<<" ";}cout<<"\n";
#define vect(type1, name) vector<type1> name
#define vectp(type1, type2, name) vector<pair<type1, type2>> name
#define set(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name

const int M = 1e9 + 7;
const int N = 1e5 + 7;
#define Pi 3.1415926535897932384626
// extern int x;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

ll lcm(ll a, ll b)
{
    return (a * b) / __gcd(a, b);
}

ll isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P)
        return true;
    else
        return false;
}

bool check_palindrome(ll n)
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

ll isprime(ll x)
{
    for (ll i = 2; i <= sqrtl(x); i++)
    {
        /* code */
        if (x % i == 0)
            return false;
    }

    return true;
}

ll fact(ll n)
{
    if ((n == 0) || (n == 1))
        return 1;
    else
        return (((n % M) * (fact(n - 1) % M)) % M);
}

string decToBinary(ll n)
{
    // Size of an integer is assumed to be 32 bits
    string s = "";
    for (ll i = 31; i >= 0; i--)
    {
        ll k = n >> i;

        if (k & 1)
            // cout << "1";
            s = "1" + s;
        else
            // cout << "0";
            s = "0" + s;
    }
    reverse(s.begin(), s.end());
    return s;
}

ll sum_of_digits(ll x)
{
    ll s = 0;
    while (x)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}

void solve()
{
    // int n;
    // cin >> n;
    vector<int> v(3);
    forn(i, 3)
    {
        cin >> v[i];
    }
    sort(all(v));
    cout << v[1] + v[2];
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
