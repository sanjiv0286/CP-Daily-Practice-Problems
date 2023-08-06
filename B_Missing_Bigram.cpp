// DATE: 05-06-2023
// TIME: 17-01-05
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

void hello()
{
    int n;
    cin >> n;
    vector<string> a(n - 2);
    forn(i, n - 2)
    {
        cin >> a[i];
    }
    string ans = a[0];
    // cout << ans.back() << " ";
    for (int i = 1; i < n - 2; i++)
    {
        // cout << a[i][0] << " ";
        if (ans.back() == a[i][0])
            ans += a[i][1];
        else
            ans += a[i];
    }
    if (ans.size() != n)
        ans += 'a';
    cout << ans << '\n';
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
        hello();
    }

    return 0;
}
