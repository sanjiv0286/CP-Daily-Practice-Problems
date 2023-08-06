// GOOD LUCK

//    | |      |    k
//   (         |  k
//    | |      |k
//       )     |  k
//    | |   •  |    k

// DATE: 24-01-2023
// TIME: 20-15-00
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

    int n;
    cin >> n;
    int arr[n];
    int as = 0;
    forn(i, n)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            as++;
        }
    }

    cout << (n - as) + ((as / 2) + (as % 2));
    cout << endl;
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

    // string s;
    // getline(cin, s);
    // cin.ignore();

    return 0;
}