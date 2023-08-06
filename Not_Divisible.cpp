// GOOD LUCK
//     | |      |    k
//    (         |  k
//     | |      |k
//        )     |  k
//     | |   •  |    k

// DATE: 03-02-2023
// TIME: 19-23-28
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)
// #define forn(i,n) for (const int &n : numbers)
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define dep(i, b, a) for (int i = b; i >= a; i--)

// #************ KEEP IN MIND ************#
// READ THE QUESTION PROPERLY [Many times if required]
// FIRST SOLVE ON PAPER AND GET THE CORRECT APPROACH THEN ONLY START CODING
//[This will save alot of time as well as lower incorrect submissions]
// DON'T GET STUCK ON ONE APPROACH [Try to think differently]
// TRY TO SOLVE SUBPROBLEMS OR FOR N==2,3,4.. FIRST THEN YOU MIGHT START SEEING SOMETHING
// DON'T REPEAT THE SAME MISTAKES DONE IN PREVIOUS CONTESTS
// #************ KEEP IN MIND ************#

void solve()
{
    pbds A; // *A.find_by_order(index=k) used for finding kth elements in ordered set
            // A.order_of_key(X) used for finding number of elements smaller than X in ordered set
    // A ek set hh jisme ye do additional property hoti hh,agr set decresing order me chhaiye to line no.7 me less ki jagah greater daaldo
    ll n, m, c = 0;
    cin >> n >> m;
    loop(i, 0, n)
    {
        ll x;
        cin >> x;
        if (x % 2)
            c++;
    }
    c = n - c;
    if (m % 2)
        print((c + 1) / 2);
    else if (c != n)
        print(c);
    else
        print(-1);
    memset(dp, -1, sizeof(dp));
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    // int n;
    // cin >> n;
    // int arr[n];
    // forn(i,n)
    // {
    // cin>>arr[i];
    // }

    // string s;
    // getline(cin, s);
    // cin.ignore();

    return 0;
}
