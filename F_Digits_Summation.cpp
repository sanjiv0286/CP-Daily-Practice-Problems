// ETHN
// DATE: 21-09-2022
// TIME: 10-18-29

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m, l1, l2, sum;
    cin >> n >> m;
    l1 = n % 10;
    l2 = m % 10;
    sum = l1 + l2;
    cout << sum << endl;
    return 0;
}