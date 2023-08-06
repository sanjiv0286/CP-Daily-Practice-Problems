// ETHN
// DATE: 20-10-2022
// TIME: 12-49-04
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    int check = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            check++;
        }
    }
    if (check == 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}