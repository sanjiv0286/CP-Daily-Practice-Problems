

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

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        forn(i, n)
        {
            forn(j, m)
            {
                cin >> arr[i][j];
            }
        }
        // forn(i, n)
        // {
        //     forn(j, m)
        //     {
        //         cout << arr[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        int b[n][m];

        forn(i, n)
        {
            forn(j, m)
            {
                cin >> b[i][j];
            }
        }
        // forn(i, n)
        // {
        //     forn(j, m)
        //     {
        //         cout << b[i][j] << " ";
        //     }
        //     cout << "\n";
        // }

        int c[n][m];
        forn(i, n)
        {

            forn(j, m)
            {
                c[i][j] = (arr[i][j] + b[i][j]);

                cout << c[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}