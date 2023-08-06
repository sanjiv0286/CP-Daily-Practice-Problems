
// // DATE: 15-12-2022
// // TIME: 19-00-45
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)

// #define f first
// #define s second
// #define pb push_back
// #define mp make_pair

// #define forn(i, n) for (int i = 0; i < n; i++)
// // #define forn(i,n) for (const int &n : numbers)
// #define REP(i, a, b) for (int i = a; i <= b; i++)
// #define DEP(i, b, a) for (int i = b; i >= a; i--)

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int> v;
//     forn(i, n)
//     {
//         int a;
//         cin >> a;
//         v.push_back(a);
//     }
//     int ct = 0;
//     forn(i, n / 2)
//     {
//         if (v[i] == v[n - i - 1])
//         {
//             ct++;
//         }
//     }
//     if (ct == n / 2)
//     {
//         cout << "YES"
//              << "\n";
//     }
//     else
//     {
//         cout << "NO"
//              << "\n";
//     }

//     return 0;
// }

// ==============================================================================

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     // Read in the size of the array and the elements
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     // Check if the array is a palindrome
//     bool is_palindrome = true;
//     for (int i = 0; i < n / 2; i++)
//     {
//         if (a[i] != a[n - i - 1])
//         {
//             is_palindrome = false;
//             break;
//         }
//     }

//     // Print the result
//     if (is_palindrome)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }
