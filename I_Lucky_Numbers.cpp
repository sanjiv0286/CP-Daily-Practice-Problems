// ETHN
// DATE: 21-10-2022
// TIME: 18-08-14
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int fd = n % 10;
    int sd = n / 10;
    if (fd % sd == 0 || sd % fd == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}