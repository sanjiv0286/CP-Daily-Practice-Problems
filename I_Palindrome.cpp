// // YE GALAT HAI
// // ETHN
// // DATE: 21-10-2022
// // TIME: 10-15-21
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     // int n1 = n;
//     int rev = 0;
//     // for (int i = n; i > 0; i = i / 10)
//     while (n)
//     {
//         int r = n % 10;
//         rev = rev * 10 + r;
//         n = n / 10;
//     }
//     cout << rev << "\n";

//     if (n != rev)
//     // if (n1 != rev)
//     {
//         cout << "NO";
//     }
//     else
//     {
//         cout << "YES";
//     }
//     return 0;
// }

// // ETHN
// // DATE: 21-10-2022
// // TIME: 10-15-21
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int n1 = n;
//     int rev = 0;
//     for (int i = n; i > 0; i = i / 10)
//     {
//         int r = i % 10;
//         rev = rev * 10 + r;
//         // n = n / 10;
//     }
//     cout << rev << "\n";

//     if (n1 != rev)
//     {
//         cout << "NO";
//     }
//     else
//     {
//         cout << "YES";
//     }
//     return 0;
// }

// ETHN
// DATE: 21-10-2022
// TIME: 10-15-21
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int n1 = n;
    int rev = 0;
    // for (int i = n; i > 0; i = i / 10)
    while (n)
    {
        int r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    cout << rev << "\n";

    if (n1 != rev)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}
