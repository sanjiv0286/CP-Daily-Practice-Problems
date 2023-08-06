// GOOD LUCK

//    | |      |    k
//   (         |  k
//    | |      |k
//       )     |  k
//    | |   •  |    k

// DATE: 11-01-2023
// TIME: 22-29-16
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

void solve()
{
    int n, y;
    cin >> n >> y;
    int arr[n];
    forn(i, n)
    {
        cin >> arr[i];
    }
    int result = arr[0];
    forn(i, n)
    {
        result |= arr[i];
    }
    // cout << result
    //      << "\n";
    result = y - result;
    // cout << result
    //      << "\n";

    int ans = result & y;
    // cout << ans
    //      << "\n";
    if (ans == result)
    {
        cout << result
             << "\n";
    }
    else
    {
        cout << -1
             << "\n";
    }
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

    return 0;
}