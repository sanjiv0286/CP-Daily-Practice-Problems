// ETHN
// DATE: 23-09-2022
// TIME: 07-58-38

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n >= 10)
    {
        n = n / 10;
    }
    // cout << n << endl;
    if (n == 0 || n % 2 == 0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }

    return 0;
}