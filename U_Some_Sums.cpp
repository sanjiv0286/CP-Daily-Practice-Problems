// CODE WRITTEN BY SK
// DATE: 27-10-2022
// TIME: 21-46-38
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 1; i <= n; i++)

int sd(int n)
{
    int s = 0;
    while (n != 0)
    {
        int d = n % 10;
        s += d;
        n /= 10;
    }
    return s;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int n, a, b, sum = 0;
    cin >> n >> a >> b;

    // for (int i = 1; i <= n; i++)
    forn(i, n)
    {
        int x = sd(i);
        if (x >= a and x <= b)
        {
            sum += i;
        }
    }
    cout << sum << endl;
}




