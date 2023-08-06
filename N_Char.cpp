// ETHN
// DATE: 23-09-2022
// TIME: 06-16-10

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if (ch >= 65 && ch <= 90)
    {
        int a;
        a = ch + 32;
        cout << (char)a;
    }
    else
    {
        int b = ch - 32;
        cout << (char)b;
    }

    return 0;
}

