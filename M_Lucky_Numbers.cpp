

// YE GALAT HAI
// #include <bits/stdc++.h>
// using namespace std;

// bool as(int n)
// {
//     while (n != 0)
//     {
//         int d = n % 10;
//         if (d != 7 && d != 4)
//         {
//             return false;
//             break;
//         }
//         n = n / 10;
//     }
//     return true;
// }

// int main()
// {
//     int a, b, x = 0;
//     cin >> a >> b;

//     for (int i = a; i <= b; i++)
//     {
//         if (as(i))
//         {
//             cout << i << " ";
//         }
//         else
//         {
//             x++;
//             // cout << -1;
//         }
//     }
//     // if (x == a + b - 1)
//     // {
//     //     cout << -1;
//     // }
//     cout << endl;
// }

#include <bits/stdc++.h>
using namespace std;

bool as(int n)
{
    int s = 0, x = 0;
    while (n != 0)
    {
        int d = n % 10;
        if (d == 7 || d == 4)
        {
            s++;
        }
        x++;
        n = n / 10;
    }
    if (s == x)
        return true;
    else
        return false;
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b, x = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (as(i))
        {
            cout << i << " ";
        }
        else
        {
            x++;
        }
    }
    if (x == b - a + 1)
    {
        cout << -1;
    }
    cout << "\n";
}
