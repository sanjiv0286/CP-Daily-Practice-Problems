// ETHN
// DATE: 15-08-2022
// TIME: 22-32-19
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char s, q = '=';
    cin >> a >> s >> b >> q >> c;
    if (s == '+' && a + b == c)
    {
        cout << "Yes";
    }
    else if (s == '-' && a - b == c)
    {
        cout << "Yes";
    }
    else if (s == '*' && a * b == c)
    {
        cout << "Yes";
    }
    else
    {
        if (s == '+')
        {
            cout << a + b;
        }
        else if (s == '-')
        {
            cout << a - b;
        }
        else
        {
            cout << a * b;
        }
        }
    return 0;
}

