#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    int m = min(a, b);

    for (int i = m; i >= 1; i--)
    {
        if (((a % i) == 0) and ((b % i) == 0))
        {
            cout << i;
            break;
        }
    }
}