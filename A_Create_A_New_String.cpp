// GOOD LUCK
// DATE: 19-11-2022
// TIME: 03-02-28
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)

#define f first
// #define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)
//#define forn(i,n) for (const int &n : numbers)
#define IN(i, a, b) for (int i = a; i < b; i++)
#define DE(i, b, a) for (int i = b; i >= a; i--)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    string s, t;
    cin >> s >> t;
    int count = 0;
    int tount = 0;

    IN(i, 0, s.length())
    {
        count++;
    }
    IN(i, 0, t.length())
    {
        tount++;
    }
    cout << count << " " << tount << "\n";

    cout << s << " " << t;

    return 0;
}