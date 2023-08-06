
// GOOD LUCK
//     | |      |    Ķ
//    (         |  Ķ
//     | |      |Ķ
//        )     |  Ķ
//     | |   •  |    Ķ

// DATE: 09-12-2022
// TIME: 22-55-00
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
#define DEP(i, b, a) for (int i = b; i >= a; i--)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int a;
    int b;
    cin >> a >> b;
    int m1[a][b];
    int m2[a][b];
    int m3[a][b];
    forn(i, a)
    {
        forn(j, b)
        {
            cin >> m1[i][j];
        }
    }
    forn(i, a)
    {
        forn(j, b)
        {
            cin >> m2[i][j];
        }
    }
    forn(i, a)
    {
        forn(j, b)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
            cout << m3[i][j]<<" ";
        }
        cout << "\n";
    }
    return 0;
}