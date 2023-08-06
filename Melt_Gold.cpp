#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll x, y;
        cin >> x >> y;
        ll i = 1;
        while (y < x) {
            y += i;
            i++;
        }
        cout << i-1 << endl;
    }
    return 0;
}
