
// #include<bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n,k;
//     cin >> n >> k;
//     vector<int> a(n);
//     for (int &x : a) {
//         cin >> x;
//     }
//     sort(a.begin(), a.end());
//     long long count = 0;
//     for (int i = 0; i < n; i++) {
//         int j = lower_bound(a.begin()+i+1, a.end(), a[i]+k) - a.begin();
//         count += n - j;
//     }
//     cout << count << "\n";
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);  
//     cout.tie(NULL); 
//     solve();
//     return 0;
// }

// ===============================================================================
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a)*(a)
#define all(a) a.begin(), a.end()

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define dep(i, b, a) for (int i = b; i >= a; i--)

#define vin(name, size) for (int i = 0; i < size; i++) cin >> name[i] 
#define vout(name) for (int i = 0; i < name.size(); i++) cout << name[i]; cout << endl
#define vvin(name, rowss, colmn) for (int i = 0; i < rowss; i++) { for (int j = 0; j < colmn; j++) cin >> name[i][j]; }
#define vvout(name, rowss, colmn) for (int i = 0; i < rowss; i++) { for (int j = 0; j < colmn; j++) cout << name[i][j]; cout << endl; }

const double PI = 3.14;

void solve() {
    int n, k;
    cin >> n >> k;
    int a[n];
    forn(i, n) {
        cin >> a[i];
    }
    sort(a, a + n);
    ll count = 0;
    forn(i, n) {
        int j = i + 1;
        while (j < n && a[j] - a[i] < k) {
            j++;
        }
        if (j < n) {
            count += n - j;
        }
    }
    cout << count << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);  
    cout.tie(NULL); 
    solve();
    return 0;
}
