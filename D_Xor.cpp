// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long a, b, q;
//     cin >> a >> b >> q;
//     long long res = q % 3;
//     if (res == 1)
//     {
//         cout << a;
//     }
//     else if (res == 2)
//     {
//         cout << b;
//     }
//     else
//     {
//         cout << (a ^ b) << endl;
//     }
//     // cout<<(5^4);
// }
// // ===========================================================================
// //                                 DOUBT
// // ===========================================================================

#include <bits/stdc++.h>
using namespace std;

int xorOfArray(int arr[], int n)
{
    int xor_arr = 0;
    for (int i = 0; i < n; i++)
    {
        xor_arr = xor_arr ^ arr[i];
    }

    return xor_arr;
}

// Driver Code
int main()
{

    int arr[] = {3, 5, 6, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << n;
    // Function call
    cout << xorOfArray(arr, n) << endl;
    return 0;
}
