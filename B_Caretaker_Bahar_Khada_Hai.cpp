#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        // cout << s << endl;

        string hour, min;
        // cout << hour << min << endl;

        hour = s[0];

        // cout << s[0] << endl;
        hour += s[1];

        // cout << s[1] << endl;
        // cout << hour << endl;
        min = s[3];
        // cout << s[3] << endl;
        min += s[4];

        // cout << s[4] << endl;
        // cout << min << endl;

        int h = stoi(hour);
        int m = stoi(min);
        // cout << h << " " << m << endl;

        h = 23 - h;
        m = 59 - m;
        // cout << h << " " << m << endl;
        cout << ((h * 60) + m) << endl;
        // cout << "**********" << endl;
    }

    return 0;
}

// =======================================================================

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int hrs, min;
        hrs = (s[0] - 48) * 10 + (s[1] - 48);
        min = (s[3] - 48) * 10 + (s[4] - 48);

        int left = (59 - min) + (23 - hrs) * 60;

        cout << left << endl;
    }
    return 0;
}