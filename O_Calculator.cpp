// ETHN
// DATE: 23-09-2022
// TIME: 07-54-46

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    if (s == '+')
    {
        cout << a + b;
    }
    else if (s == '-')
    {
        cout << a - b;
    }
    else if (s == '*')
    {
        cout << a * b;
    }
    else
    {
        cout << a / b;
    }
    return 0;
}