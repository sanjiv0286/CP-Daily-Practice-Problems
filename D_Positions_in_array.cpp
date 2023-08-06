// GOOD LUCK
// DATE: 16-11-2022
// TIME: 18-47-13
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)
//#define forn(i,n) for (const int &n : numbers)
#define REP(i, a, b) for (int i = a; i <= b; i++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    // }

    int n, i;
    cin >> n;
    int arr[n];
    forn(i, n)
    {
        cin >> arr[i];
    }
    forn(i, n)
    {
        if(arr[i]<=10)
        cout <<"A["<<i<<"]"<<" = "<<arr[i]<<"\n";
    }

    return 0;
}