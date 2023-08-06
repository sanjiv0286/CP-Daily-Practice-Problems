#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i,n) for (int i = 0; i < n; i++)
// #define forn(i,n) for (const int &n : numbers)
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define DEP(i,b,a) for (int i = b; i >= a; i--)

int main()
{

    ios_base  ::   sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    forn(i, n)
    {
        cin >> a[i];
    }
    sort(a, a + n,      greater<int>());
    // forn(i, n)
    // {
    //     cout << a[i];
    //     cout << "\n";
    // }
    ll mx = 0, in = 1;
    forn(i, n)
    {
        mx = max(mx, a[i] * in);
        in++;
    }
    cout << mx << "\n";

    return 0;
}
