// ETHN
// DATE: 09-10-2022
// TIME: 11-25-14
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
        ll product = 1;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            product = product * x;
        }
        int digit = product % 10;
        if (digit % 10 == 2 || digit % 10 == 3 || digit % 10 == 5)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}