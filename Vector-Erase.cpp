
// DATE: 09-12-2022
// TIME: 22-55-00
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)

// #define f first
// #define s second
// #define pb push_back
// #define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)
// #define forn(i,n) for (const int &n : numbers)
// #define REP(i,a,b) for (int i = a; i <= b; i++)
// #define DEP(i, b, a) for (int i = b; i >= a; i--)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int n;
    cin >> n; // taking size of vector from user
    int a;
    vector<int> v;
    // we can also mention size here like
    // vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int t;
    cin >> t;
    v.erase(v.begin() + t - 1, v.begin() + t);
    int x, y;
    cin >> x >> y;
    v.erase(v.begin() + x - 1, v.begin() + y - 1);
    cout << v.size() << "\n";
    for (auto &p : v)
    {
        cout << p << " ";
    }

    cout
        << endl;
    return 0;
}
