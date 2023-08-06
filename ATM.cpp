
// CODE WRITTEN BY SK
// DATE: 29-10-2022
// TIME: 10-57-11
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int x;
    float y;
    cin >> x >> y;
    if ((x % 5 == 0) && (y - x - 0.50) >= 0)
    {
        float z = (y - x - 0.50);
        cout << fixed << setprecision(2) << z;
    }
    else
    {
        cout << fixed << setprecision(2) << y;
    }

    return 0;
}

// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.precision(2);

//     int a;
//     float b;
//     cin >> a >> b;

//     if ((a%5==0) && (b-a-0.5>=0))
//     {
//         cout << fixed << b-a-0.5 << endl;
//     }
//     else
//     {
//         cout << fixed << b << endl;
//     }

//     return 0;
// }
