// ETHN
// DATE: 24-09-2022
// TIME: 16-40-35

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x;
    cin >> x;
    // [0,25], (25,50], (50,75], (75,100]
    if (x >= 0 && x <= 25)
    {
        cout << "Interval [0,25]";
    }
    else if (x > 25 && x <= 50)
    {
        cout << "Interval (25,50]";
    }
    else if (x > 50 && x <= 75)
    {
        cout << "Interval (50,75]";
    }
    else if (x > 75 && x <= 100)
    {
        cout << "Interval (75,100]";
    }
    else
    {
        cout << "Out of Intervals";
    }

    return 0;
}
