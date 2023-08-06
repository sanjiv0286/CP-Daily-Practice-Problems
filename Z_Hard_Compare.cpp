// ETHN
// DATE: 16-08-2022
// TIME: 00-47-57
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a, b, c, d; //, e, f;
    cin >> a >> b >> c >> d;
    // e = pow(a, b);
    // f = pow(c, d);

    // if (e > f)
    if (b * log(a) > d * log(c))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}



