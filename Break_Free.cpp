// हर हर महादेव

#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define F first
#define S second
#define dbl double
#define pb push_back
#define ll long long int
long long int mod = 1000000007;
#define all(x) x.begin(), x.end()
#define Pi 3.1415926535897932384626

#define vin(v) for(auto &x:v)cin >> x
#define deb(v) cout << #v << " " << v << "\n"
#define vout(v) for(auto x:v)cout << x << " " ;cout<<endl
#define deb2(v, k) cout << #v << " " << v << "\n" \<< #k << " " << k << "\n"

typedef tree<long long int, null_type, less<long long int>, rb_tree_tag, tree_order_statistics_node_update>sat;
typedef tree<long long int, null_type, less_equal<long long int>, rb_tree_tag, tree_order_statistics_node_update>multisat;

void WA() {
    ll  n, i, j, k;  cin >> n;
    vector<ll>v; ll ev = 0;
    for (i = 0;i < n;i++) {
        ll d;cin >> d; v.pb(d);
        if (d % 2 == 0)ev++;
    }
    ll ans = 1;
    for (i = 0;i < ev;i++) {
        ans *= 2;
        ans %= mod;
    }
    if (ev == n) {
        ans--;
    }
    ans %= mod;
    cout << ans << endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    ll t = 1;  cin >> t;
    for (ll i = 1; i <= t; i++)  WA();
}
// ************************************************************************
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t--) { // Loop over each test case
        long long n;
        cin >> n; // Read the size of the list
        
        vector<long long> a(n); // Create a vector to store the list
        
        for (int i = 0; i < n; i++) {
            cin >> a[i]; // Read the elements of the list
        }
        
        long long c = 0;
        
        // Count the number of even numbers in the list
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                c++;
            }
        }
        
        long long k = 1;
        int v = c;
        
        // Compute 2^c modulo 1000000007 using repeated squaring
        while (v--) {
            k *= 2;
            k %= 1000000007;
        }
        
        long long u = k;
        
        if (c == n) {
            u--;
        }
        
        cout << u << endl; // Print the result
    }
    
    return 0;
}