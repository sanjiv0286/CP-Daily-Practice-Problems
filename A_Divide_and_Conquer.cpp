

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
void minimum(int c, int min)
{

    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min < arr[i])
        {
            min = arr[i];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int sum = 0;
        forn(i, n)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        } // cout << sum << "  ";

        if (sum % 2 == 0)
        {
            cout << 0 << "\n";
        }
        minimum(int c,int min);
        // else
        // {

        //     int x = floor(min / 2);
        //     cout << x << " ";
        //     forn(i, n)
        //     {
        //         sum = sum + arr[i];
        //     }
        // }
    }

    return 0;
}