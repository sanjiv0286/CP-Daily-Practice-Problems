// GOOD LUCK
// DATE: 21-11-2022
// TIME: 20-06-32
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)
#define forn(i, n) for (const int &n : numbers)
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define DEP(i, b, a) for (int i = b; i >= a; i--)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {

        int a, b, c;
        cin >> a >> b >> c;
        cout << sanjiv(a, b, c) << "\n";
    }

    return 0;
}
int sanjiv(int a, int b, int c)
{

    if ((a < b && b < c) || (c < b && b < a))
        return b;

    else if ((b < a && a < c) || (c < a && a < b))
        return a;

    else
        return c;
}