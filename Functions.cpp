
// GOOD LUCK
// 😊→→→→→👍
//     | |      |    Ķ
//    (         |  Ķ
//     | |      |Ķ
//        )     |  Ķ
//     | |   •  |    Ķ
// 👀

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

// #define forn(i, n) for (int i = 0; i < n; i++)
// #define forn(i,n) for (const int &n : numbers)
// #define REP(i,a,b) for (int i = a; i <= b; i++)
// #define DEP(i, b, a) for (int i = b; i >= a; i--)

void solve(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
        cout << a;
    else if (b > c && b > d && b > a)
        cout << b;
    else if (c > a && c > b && c > d)
        cout << c;
    else
        cout << d;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    solve(a, b, c, d);
    return 0;
}