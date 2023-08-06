// ETHN
// DATE: 09-10-2022
// TIME: 14-14-41
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll result = 0;
        ll power2 = 1;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            int binary_digit = s[i] - '0';
            result = result + (binary_digit * power2);
            power2 = power2 * 2;
        }
        cout << result << endl;
    }

    return 0;
}