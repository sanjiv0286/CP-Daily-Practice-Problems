// ETHN
// DATE: 24-09-2022
// TIME: 17-07-31

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    char s;
    cin >> x >> s >> y;
    if (s == '>' && x > y)
    {
        cout << "Right";
    }
    else if (s == '<' && x < y)
    {
        cout << "Right";
    }
    else if (s == '=' && x == y)
    {
        cout << "Right";
    }
    else
    {
        cout << "Wrong";
    }

    return 0;
}