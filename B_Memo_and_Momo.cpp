// ETHN
// DATE: 16-08-2022
// TIME: 21-31-00
#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ll a, b, k;
    cin >> a >> b >> k;
    if (a % k == 0 && b % k == 0)
    {
        cout << "Both";
    }
    else if (a % k != 0 && b % k == 0)
    {
        cout << "Momo";
    }
    else if (a % k == 0 && b % k != 0)
    {
        cout << "Memo";
    }
    else
    {
        cout << "No One";
    }
    return 0;
}