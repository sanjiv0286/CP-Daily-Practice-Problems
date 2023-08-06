// CODE WRITTEN BY SK
// DATE: 03-11-2022
// TIME: 23-59-43
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
               {
                 ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
                             {
        int d, l, r;
        cin >> d >> l >> r;
        if (d < l && d < r)
                             {
            cout << "Too Early"
                 << "\n";
        }
        else if (d > l && d > r)
        {
            cout << "Too Late"
                 << "\n";
        }
        else
        {
                             cout << "Take second dose now"
                 << "\n";
        }
    }   

    return 0;
                               }