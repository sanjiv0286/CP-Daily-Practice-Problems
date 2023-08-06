// // ETHN
// // DATE: 16-08-2022
// // TIME: 00-12-00
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a, b, c, d, e, f, g, h;
//     cin >> a >> b >> c >> d;
//     e = a % 100;
//     f = b % 100;
//     g = c % 100;
//     h = d % 100;
//     int i = (e * f * g * h);
//     if (i % 100 <= 9)
//     {
//         cout << "0" << i % 100 << endl;
//     }
//     else
//     {
//         cout << i % 100 << endl;
//     }

//     return 0;
// }

// ETHN
// DATE: 16-08-2022
// TIME: 00-12-00
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;
    int i = (a * b * c * d);
    if (i % 100 <= 9)
    {
        cout << "0" << i%100 << endl;
    }
    else
    {
        cout << i % 100 << endl;
    }

    return 0;
}

