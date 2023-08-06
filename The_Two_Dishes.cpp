// CODE WRITTEN BY SK
// DATE: 04-11-2022
// TIME: 00-25-31
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
        int m, s;
        cin >> m >> s;
        if (m >= s)
            cout << s << "\n";
        else
            cout << abs(m - (s - m)) << "\n";
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, s;
//         cin >> n >> s;

//         int a = 0, b = s;

//         while (b > n)
//         {
//             a++;
//             b--;
//         }

//         cout << abs(a - b) << endl;
//     }
//     return 0;
// }
