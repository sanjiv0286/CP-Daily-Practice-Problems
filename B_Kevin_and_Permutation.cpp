#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        a[0] = 1;
        ll x = n / 2;
        for (ll i = 1; i < n; i++)
        {
            if (a[i - 1] + x <= n)
            {
                a[i] = a[i - 1] + x;
            }
            else
            {
                a[i] = a[i - 1] + x - n;
            }
        }

        if (x == 1)
        {
            for (ll i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
        }
        else if (n % 2 == 0)
        {
            for (ll i = 1; i <= n / 2; i++)
            {
                cout << i + (n + 1) / 2 << " " << i << ' ';
            }
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}