
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
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    double midX1 = (x1 + x2) / 2;
    double midy1 = (y1 + y2) / 2;
    double midX2 = (x3 + x4) / 2;
    double midy2 = (y3 + y4) / 2;
    double r1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) / 2;
    double r2 = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2)) / 2;
    double distance = sqrt(pow(midX1 - midX2, 2) + pow(midy1 - midy2, 2));
    double rr = r1 + r2;
    if (distance > rr)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}