// CODE WRITTEN BY SK
// DATE: 26-10-2022
// TIME: 21-22-55
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int n;
    cin >> n;

    int s = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = s; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k < 2 * i; k++)
        {
            cout << "*";
        }
        // s--;
        cout << "\n";
    }

    return 0;
}

// for (int i = 1; i <= n; i++) {
// for (int j = 5; j >= i; j--) {
// System.out.print(" ");
// }
// for(int j=1;j<=i;j++){
// System.out.print("* ");
// }
// System.out.println();
// }


