// CODE WRITTEN BY SK
// DATE: 29-10-2022
// TIME: 13-34-19
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        char a;
        cin >> a;
        if (a == 'b' || a == 'B')
        {
            cout << "BattleShip"
                 << "\n";
        }
        else if (a == 'c' || a == 'C')
        {
            cout << "Cruiser"
                 << "\n";
        }
        else if (a == 'd' || a == 'D')
        {
            cout << "Destroyer"
                 << "\n";
        }
        else
        {
            cout << "Frigate"
                 << "\n";
        }
    }

    return 0;
}
