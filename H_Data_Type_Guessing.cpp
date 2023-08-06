// ETHN
// DATE: 21-10-2022
// TIME: 19-15-32
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    double n, k, a;
    cin >> n >> k >> a;

    double res;
    res = (n * k) / a;
    ll my_num = res;
    double my_res = res - my_num;
    if (my_res > 0)
    {
        cout << "double";
    }
    else if (my_num <= (2147483648) && my_num <= (2147483648))
    {
        cout << "int";
    }
    else
    {
        cout << "long long";
    }

    return 0;
}