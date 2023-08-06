#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t; // read the number of test cases

    while (t--) // for each test case
    {
        int n;
        cin >> n; // read the size of the array

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i]; // read the elements of the array

        // for each sub-array
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                // find the maximum number in the sub-array
                int max_num = *max_element(a + i, a + j + 1);
                cout << max_num << " "; // print the maximum number
            }
        }

        cout << endl; // end the line
    }

    return 0;
}
