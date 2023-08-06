// GOOD LUCK

//    | |      |    k
//   (         |  k
//    | |      |k
//       )     |  k
//    | |   •  |    k

// DATE: 05-01-2023
// TIME: 06-52-43
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)
// #define forn(i,n) for (const int &n : numbers)
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define dep(i, b, a) for (int i = b; i >= a; i--)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;

    int a[n];
    int s1 = 0, s2 = 0;
    forn(i, n)
    {
        cin >> a[i];
        s1 = s1 + a[i];
    }
    int b[m];
    forn(i, m)
    {
        cin >> b[i];
        s2 = s2 + b[i];
    }
    if (s1 == s2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}