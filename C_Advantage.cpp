// DATE: 10-06-2023
// TIME: 07-49-30
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
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

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    forn(i, n)
    {
        cin >> v[i];
    }
    vector<int> a = v;
    sort(a.begin(), a.end());
    reverse(all(a));

    forn(i, n)
    {
        if (v[i] == a[0])
        {
            cout << v[i] - a[1]<< " ";
        }
        else
        {
            cout << v[i] - a[0] << " ";
        }
    }
    cout<<"\n";
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
