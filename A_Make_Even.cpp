// // DATE: 06-06-2023
// // TIME: 03-19-47
// #include <bits/stdc++.h>
// #include <unordered_set>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)

// const double PI = 3.14;
// // extern int x;

// int gcd(int a, int b)
// {
//     while (b != 0)
//     {
//         int rem = a % b;
//         a = b;
//         b = rem;
//     }
//     return a;
// }

// int rev(int n, int reverse)
// {
//     if (n == 0)
//     {
//         return reverse;
//     }
//     reverse = reverse * 10 + n % 10;
//     return rev(n / 10, reverse);
// }

// void solve()
// {
//     int n;
//     cin >> n;
//     int d = pow(10, (n - 1));
//     int sd = n / (d);
// int ct=0;
//     if (n % 2 == 0)
//     {
//         cout << 0 << endl;
//     }
//     else if (sd % 2 == 0)
//     {
//         rev(n, 0);
//         ct++;
//     }
//     else
//     {
//         cout << -1 << endl;
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }
// ***********************************************

// DATE: 06-06-2023
// TIME: 03-40-56
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

void solve()
{
    string s;
    cin >> s;
    if ((s.back() - '0') % 2 == 0)
    {
        cout << "0\n";
    }
    else if ((s[0] - '0') % 2 == 0)
    {
        cout << "1\n";
    }
    else
    {
        for (char c : s)
        {
            int x = c - '0';
            if (x % 2 == 0)
            {
                cout << "2\n";
                return;
            }
        }
        cout << "-1\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// ***************************************************************

// DATE: 06-06-2023
// TIME: 03-50-38
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
// extern int x;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

void hello()
{
    ll evcnt = 0;
    string s;
    cin >> s;
    if (int(s[s.size() - 1]) % 2 == 0)
    {
        cout << 0 << endl;
    }
    else if (int(s[0]) % 2 == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (int(s[i]) % 2 == 0)
            {
                evcnt++;
            }
        }
        if (evcnt == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        hello();
    }
    return 0;
}
