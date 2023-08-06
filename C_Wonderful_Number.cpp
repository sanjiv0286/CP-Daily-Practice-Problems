// GOOD QUES
// ========================================================
// GOOD LUCK
//     | |      |    Ķ
//    (         |  Ķ
//     | |      |Ķ
//        )     |  Ķ
//     | |   •  |    Ķ

// DATE: 09-12-2022
// TIME: 22-55-00
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)
// #define forn(i,n) for (const int &n : numbers)
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define DEP(i, b, a) for (int i = b; i >= a; i--)
// =========================================================

bool isPalindrome(int n)
{
    int a[32];
    int i = 0;
    while (n != 0)
    {
        a[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = 0; j < i; j++)
        if (a[j] != a[i - j - 1])
        {
            return false;
        }
    return true;
}
void solve(int n)
{
    int a[32];
    int i = 0;
    while (n != 0)
    {
        a[i] = n % 2;
        n = n / 2;
        i++;
    }
    cout << i << "\n";
    REP(k, 0, i - 1)
    {
        cout << a[k];
    }

    cout << "\n";

    DEP(j, i - 1, 0)
    {
        cout << a[j];
    }
    cout << "\n";
}
// =============================================================

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int n;
    cin >> n;

    if (n % 2 != 0 && isPalindrome(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    // solve(n);

    return 0;
}