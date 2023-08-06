// ETHN
// DATE: 20-10-2022
// TIME: 12-29-55
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        ll f = 1;
        for (int i = 1; i <= n; i++)
        {
            f = f * i;
        }
        cout << f << "\n";
    }

    return 0;
}