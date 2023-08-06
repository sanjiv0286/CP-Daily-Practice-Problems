// ETHN
// DATE: 21-10-2022
// TIME: 16-44-06
#include <bits/stdc++.h>
using namespace std;

int main()
{

    float ap, x, p, bp;
    cin >> x >> ap;
    p = (1 - (x / 100));
    bp = ap / p;
    cout << fixed << setprecision(2) << bp;
    return 0;
}
