
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
    ll r, s;
    cin >> r >> s;
    double val = sqrt(2) * s;
    if (2 * r >= val)
    {
        cout << "Circle";
    }
    else if (2 * r < s)
    {
        cout << "Square";
    }
    else
    {
        cout << "Complex";
    }

    return 0;
}
// ================================================================
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long r, s;
    cin >> r >> s;
    if (s >= r * 2)
    {
        cout << "Square" << endl;
    }
    else if (r * 2 > sqrt(pow(s, 2) + pow(s, 2)))
    {
        cout << "Circle" << endl;
    }
    else
    {
        cout << "Complex" << endl;
    }
}