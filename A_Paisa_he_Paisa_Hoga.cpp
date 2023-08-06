// GOOD LUCK

//    | |      |    k
//   (         |  k
//    | |      |k
//       )     |  k
//    | |   •  |    k

// DATE: 08-01-2023
// TIME: 18-41-15
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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[12];
        forn(i, 12)
        {
            cin >> arr[i];
        }
        int sum = 0;
        forn(i, m)
        {
            sum = sum + arr[i];
        }
        // cout<<sum;
        int ex = n * m;
        int save = sum - ex;
        if (ex > sum)
        {
            cout << 0 << "\n";
        }
        else
            cout << save << "\n";
    }

    return 0;
}
