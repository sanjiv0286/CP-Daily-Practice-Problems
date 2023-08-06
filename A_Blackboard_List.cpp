// DATE: 04-06-2023
// TIME: 20-31-12
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {

        int m;
        cin >> m;
        vector<int> v(m);
        forn(i, m)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if (v[0] < 0)
        {
            cout << v[0] << endl;
        }
        else
        {
            cout << v[m - 1] << endl;
        }
    }

    return 0;
}
