

// GOOD LUCK

//    | |      |    k
//   (         |  k
//    | |      |k
//       )     |  k
//    | |   •  |    k

// DATE: 17-01-2023
// TIME: 07-02-38
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
    ll i, n, k;
    cin >> n;
    long long int a = 2 * n;
    long long int arr[a];
    long long int j = 0;
    long long int count = 0;
    for (k = 0; k < a; k++)
    {
        cin >> arr[k];
        if (arr[k] > n)
        {
            count += n - k + j;
            j++;
        }
    }
    cout << count << endl;
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