#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fo for (int i = 0; i < n; ++i)
#define vect(type1, name) vector<type1> name
#define pb push_back
#define full(x) x.begin(), x.end()
#define Pi 3.1415926535897932382626

void solve()
{
    vector<ll> v(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    cout << v[0] << " " << v[1] << " " << (v[6] - (v[0] + v[1])) << endl;
}
int main()
{
    ll t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}