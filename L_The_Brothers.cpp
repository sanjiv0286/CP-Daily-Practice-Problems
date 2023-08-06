// ETHN
// DATE: 23-09-2022
// TIME: 06-02-45

#include <bits/stdc++.h>
using namespace std;
#define s string

int main()
{

    string f1, l1;
    string f2, l2;
    cin >> f1 >> l1;
    cin >> f2 >> l2;
    // cout << f1 + " " + l1 << endl;
    // cout << f2 + " " + l2 << endl;
    if (l1 == l2)
    {
        cout << "ARE Brothers";
    }
    else
    {
        cout << "NOT";
    }

    return 0;
}