// ETHN
// DATE: 23-09-2022
// TIME: 06-09-08

#include <bits/stdc++.h>
using namespace std;
#define c char
int main()
{
    char what;
    cin >> what;
    {
        if (what >= 97 && what <= 122)
        {
            cout << "ALPHA" << endl;
            cout << "IS SMALL";
        }

        else if (what >= 65 && what <= 90)
        {
            cout << "ALPHA" << endl;
            cout << "IS CAPITAL";
        }

        else if (what >= 48 && what <= 57)
        {
            cout << "IS DIGIT";
        }
    }

    return 0;
}
