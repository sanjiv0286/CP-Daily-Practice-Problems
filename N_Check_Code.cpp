
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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;
    // int n;
    string s;
    // int s.size() = a + b + 1;
    cin >> s;
    if (s[a] == '-')
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
// ========================================================================
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     string s;
//     cin >> s;

//     if (s[a ] != '-')
//     {
//         cout << "No" << endl;
//         return 0;
//     }

//     for (int i = 0; i < s.size(); i++)
//     {
//         if (i == a )
//             continue;
//         if (!isdigit(s[i])) 
//         {
//             cout << "No" << endl;
//             return 0;
//         }
//     }

//     cout << "Yes" << endl;
//     return 0;
// }
