// ETHN
// DATE: 21-10-2022
// TIME: 17-43-19
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    // if ((d == (a + b) - c) || (d == (a + c) - b))
    //     cout << "YES\n"
    //          << endl;
    // else if ((d == a + (b * c)) || (d == (a * b) + c))
    //     cout << "YES\n"
    //          << endl;
    // else if ((d == a - (b * c)) || (d == (a * b) - c))
    //     cout << "YES\n"
    //          << endl;
    // else
    //     cout << "NO\n"
    //          << endl;
    if ((d == (a + b) - c) || (d == (a + c) - b) || (d == a + (b * c)) || (d == (a * b) + c) || (d == a - (b * c)) || (d == (a * b) - c))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}