// CODE WRITTEN BY SK
// DATE: 03-11-2022
// TIME: 23-49-10
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
        int a, b, x;
        cin >> a >> b >> x;
        int y = (b - a) / x;
        cout << y<<"\n";
    }

    return 0;
}