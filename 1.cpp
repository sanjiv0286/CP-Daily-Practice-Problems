// DATE: 04-06-2023
// TIME: 08-02-15
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

void solve()
{
    string s;
    cin >> s;
    unordered_map<char, int> m;
    for (char x : s)
    {
        m[x]++;
    }
    int ct = 0;
    for (auto y : m)
    {
        if (y.second > 0)
            ct++;
    }
    cout << ct << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    solve();

    return 0;
}
