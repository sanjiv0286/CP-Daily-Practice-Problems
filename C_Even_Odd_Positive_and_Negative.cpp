// ETHN
// DATE: 15-10-2022
// TIME: 21-38-39
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int even = 0, odd = 0, positive = 0, negative = 0;
    while (t--)
    {
        int n;
        cin >> n;

        if (n % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (n > 0)
        {
            positive++;
        }
        else if (n < 0)
        {
            negative++;
        }
    }
    cout << "Even: " << even << "\n";
    cout << "Odd: " << odd << "\n";
    cout << "Positive: " << positive << "\n";
    cout << "Negative: " << negative;

    return 0;
}

// // ETHN
// // DATE: 06-09-2022
// // TIME: 09-12-59
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     int even = 0, odd = 0, positive = 0, negative = 0;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         if (n % 2 == 0)
//         {
//             even++;
//         }
//         else if (n % 2 != 0)
//         {
//             odd++;
//         }

//         else if (n > 0)
//         {
//             positive++;
//         }
//         else if (n < 0)
//         {
//             negative++;
//         }
//     }
//     cout << "Even: " << even << endl;
//     cout << "Odd: " << odd << endl;
//     cout << "Positive: " << positive << endl;
//     cout << "Negative: " << negative;

//     return 0;
// }