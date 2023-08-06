#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long arr[31];
    arr[0] = 1;
    for (int i = 1; i <= 30; i++)
    {
        arr[i] = pow(2, i);
    }
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string ans = "Gaurish";
        for (int i = 0; i <= 30; i++)
        {
            if (arr[i] == n and i % 2 == 0)
            {
                ans = "Vandit";
                break;
            }
            else if (arr[i] == n and i % 2 == 1)
            {
                ans = "Shiva";
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}