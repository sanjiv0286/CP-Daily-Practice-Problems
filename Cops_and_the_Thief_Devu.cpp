#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, x, y;
        cin >> m >> x >> y;
        int a[m];
        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }
        sort(a, a + m);
        int ans = 0;
        for (int i = 0; i < m; i++) {
            int left = max(1, a[i] - x * y);
            int right = min(100, a[i] + x * y);
            if (i == 0 && left != 1) {
                ans += left - 1;
            }
            if (i == m - 1 && right != 100) {
                ans += 100 - right;
            }
            if (i < m - 1) {
                int gap = a[i + 1] - a[i];
                int max_gap = 2 * x * y;
                if (gap > max_gap) {
                    ans += gap - max_gap;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
