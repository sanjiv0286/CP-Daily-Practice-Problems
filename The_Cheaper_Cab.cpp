// ETHN
// DATE: 10-08-2022
// TIME: 22-40-45
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n < m)
            cout << "FIRST" << endl;
        else if (n > m)
            cout << "SECOND" << endl;
        else
            cout << "ANY" << endl;
    }

    return 0;
}