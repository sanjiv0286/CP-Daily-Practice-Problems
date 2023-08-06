#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s = 0;
        while (n != 0)
        {
            int d = n % 10;
            if (d == 4)
            {
                s++;
            }
            n = n / 10;
        }
        cout << s << "\n";
    }
}