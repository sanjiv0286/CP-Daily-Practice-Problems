// ETHN
// DATE: 15-10-2022
// TIME: 22-57-45

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, max;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        int x;
        cin >> x;
        if (i == 0)
        {
            max = x;
        }

        if (x > max)
        {
            max = x;
        }
    }

    cout << max << "\n";

    return 0;
}