// GOOD LUCK

//    | |      |    k
//   (         |  k
//    | |      |k
//       )     |  k
//    | |   •  |    k

// DATE: 10-01-2023
// TIME: 14-09-06
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

void solve()
{
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int l, b;
    cin >> l >> b;
    if (l == b)
    {
        cout << 1 << "\n";
    }
    else if (l > b)
    {
        cout << 0 << "\n";
    }
    else
    {
        for (int i = 1; i <= 10; i++)
        {
            l = 3 * l;
            b = 2 * b;
            if (l > b)
            {
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}

// ====================================================================================
// #include <bits/stdc++.h>
// using namespace std;
// int main() //
// {
//     int w1, w2;
//     cin >> w1 >> w2;
//     int year = 0;
//     while (w1 <= w2)
//     {
//         w1 *= 3;
//         w2 *= 2;
//         year++;
//     }
//     cout << year << endl;
// }