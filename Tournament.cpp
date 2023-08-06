// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a)*(a)
// #define all(a) a.begin(), a.end()

// #define f first
// #define s second
// #define pb push_back
// #define mp make_pair

// #define forn(i, n) for (int i = 0; i < n; i++)
// #define rep(i,a,b) for (int i = a; i <= b; i++)
// #define dep(i, b, a) for (int i = b; i >= a; i--)

// #define vin(name, size) for (int i = 0; i < size; i++) cin >> name[i] 
// #define vout(name) for (int i = 0; i < name.size(); i++) cout << name[i]; cout << endl
// #define vvin(name, rowss, colmn) for (int i = 0; i < rowss; i++) { for (int j = 0; j < colmn; j++) cin >> name[i][j]; }
// #define vvout(name, rowss, colmn) for (int i = 0; i < rowss; i++) { for (int j = 0; j < colmn; j++) cout << name[i][j]; cout << endl; }

// const double PI = 3.14;

// void solve() {
//     int n;
//     cin >> n;
//     int a[n];
//     forn(i, n) {
//         cin >> a[i];
//     }
//     // int m= n*(n-1)/2;
//     int revenue = 0;
//     // int diff;
//     for (int i = 0; i < n; i++) {
//         for (int j = i+1; j <  n; j++) {
//             int diff = abs(a[i] - a[j]);
//             revenue += diff;
//         }
//     }
//     cout <<  revenue << endl;
// }
// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);  
//     cout.tie(NULL); 
//     solve();
//     return 0;
// }
// ===========================================================



// #include <bits/stdc++.h>
// using namespace std;

// #define all(x) x.begin(), x.end()
// #define ll long long int
// #define vec(type1, name) vector<type1> name

// void solve()
// {
//     ll i, j, k;
//     ll n;
//     cin >> n;
//     vec(ll, v)(n);
//     ll sm = 0, res = 0;
//     for (i = 0; i < n; i++)
//     {
//         cin >> v[i];
//         sm += v[i];
//     }
//     sort(all(v));
//     for (i = 0; i < n; i++)
//     {
//         sm -= v[i];
//         res += abs(sm - (v[i] * (n - i - 1)));
//     }
//     cout << res << "\n";
//     return;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     solve();
    
// }

// =======================================================================
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n = 4;
    int strengths[] = {3, 10, 3, 5};
    int revenue = 0;

    sort(strengths, strengths+n);

    for (int i = 0; i < n-1; i++) {
        int diff = abs(strengths[i+1] - strengths[i]);
        revenue += diff;
    }

    cout << "Total advertising revenue: " << revenue << endl;

    return 0;
}
