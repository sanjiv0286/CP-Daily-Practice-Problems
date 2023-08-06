// CODE WRITTEN BY SK
// DATE: 29-10-2022
// TIME: 10-08-48
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x = a % b;
        cout << x << "\n";
    }

    return 0;
}