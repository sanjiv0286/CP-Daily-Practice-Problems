// CODE WRITTEN BY SK
// DATE: 29-10-2022
// TIME: 10-37-26
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t                  ;
    cin >>                                         t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        if (n > m)
            cout << ">"
                 << "\n";
        else if (n < m)
            cout << "<"
                 << "\n";
        else
            cout << "="
                 << "\n";
    }

    return 0;
}