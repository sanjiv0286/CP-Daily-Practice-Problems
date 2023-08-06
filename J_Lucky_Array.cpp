
// // DATE: 09-12-2022
// // TIME: 22-55-00
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)

// // #define f first
// // #define s second
// // #define pb push_back
// // #define mp make_pair

// #define forn(i, n) for (int i = 0; i < n; i++)
// // #define forn(i,n) for (const int &n : numbers)
// // #define REP(i,a,b) for (int i = a; i <= b; i++)
// // #define DEP(i, b, a) for (int i = b; i >= a; i--)

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);

//     int n;
//     cin >> n;
//     int arr[n];
//     forn(i, n)
//     {
//         cin >> arr[i];
//     }
//     int c = 0;
//     forn(i, n)
//     {
//         int min = arr[0];
//         if (arr[i] < min)
//         {
//             // min = arr[i];
//             // cout << min << "\n";
//             c++;
//         }
//     }
//     // cout << c << "\n";
//     if (c % 2 == 0)
//     {
//         cout << "Unlucky ";
//     }
//     else
//     {
//         cout << "Lucky ";
//     }

//     return 0;
// }
// ================================================================================
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min = arr[0];
    // cout << min << "\n";
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    // cout << min << "\n";
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min)
        {
            c++;
        }
    }
    // cout << c << "\n";

    if (c % 2 == 0)
    {
        cout << "Unlucky" << endl;
    }
    else
    {
        cout << "Lucky" << endl;
    }

    return 0;
}
