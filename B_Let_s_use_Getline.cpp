// GOOD LUCK
// DATE: 19-11-2022
// TIME: 04-17-45
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)

//#define f first
//#define s second
//#define pb push_back
//#define mp make_pair

//#define forn(i, n) for (int i = 0; i < n; i++)
//#define forn(i,n) for (const int &n : numbers)
//#define IN(i,a,b) for (int i = a; i <= b; i++)
//#define DE(i, b, a) for (int i = b; i >= a; i--)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    string s;
    getline(cin, s);
    cin.ignore();
    for (int i = 0; i < s.size(); i++)
    {
        char x = s[i];
        if (x == '\\')
        {
            break;
        }
        cout << x;
    }

    return 0;
}
