// ETHN
// DATE: 23-10-2022
// TIME: 08-27-58
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        if (t % i == 0)
        {
            cout << i << "\n";
        }
    }
   

    return 0;
}