// GOOD LUCK
// DATE: 18-11-2022
// TIME: 19-08-35
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)
// #define forn(i,n) for (const int &n : numbers)
#define REP(i, a, b) for (int i = a; i <= b; i++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    forn(i, n)
    {
        cin >> a[i];
    }

    int m = a[0], index = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < m)
        {
            m = a[i];
            index = i + 1;
        }
    }

    cout << m << " " << index << endl;
    return 0;
}

// -----------------------------------------------------------------------

