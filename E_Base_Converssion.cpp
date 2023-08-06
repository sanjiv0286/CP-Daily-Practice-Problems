// very very important
// see assuit community c++ code git hub
// ==========================================================
// C++ program to convert a decimal
// number to binary number

// #include <iostream>
// using namespace std;

// // function to convert decimal to binary
// void decToBinary(int n)
// {
//     // array to store binary number
//     int binaryNum[32];

//     // counter for binary array
//     int i = 0;
//     while (n > 0)
//     {

//         // storing remainder in binary array
//         binaryNum[i] = n % 2;
//         n = n / 2;
//         i++;
//     }

//     // printing binary array in reverse order
//     for (int j = i - 1; j >= 0; j--)
//     {
//         cout << binaryNum[j];
//     }
//     cout << "\n";
// }

// // Driver program to test above function
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         decToBinary(n);
//     }
//     return 0;
// }
// ============================================================
// In this C++ program, binaryNum is an array of integers with a size of 32.
// It is used to store the binary representation of a decimal number as it is being converted.
// The size of the array is set to 32 because a binary number can have at most 32 digits.
// This means that the array is capable of storing any binary number that is 32 digits or
// less in length.
// if the decimal number 100 was being converted to binary, the binary representation would be 1100100, which has 7 digits.
// In this case, only the first 7 elements of the binaryNum array would be used.The remaining 25 elements would not be used.
// ===================================================================

// GOOD LUCK
//     | |      |    Ķ
//    (         |  Ķ
//     | |      |Ķ
//        )     |  Ķ
//     | |   •  |    Ķ

// DATE: 09-12-2022
// TIME: 22-55-00
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)

#define f first
#define s second
#define pb push_back
#define mp make_pair

// #define forn(i,n) for (const int &n : numbers)
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define DEP(i, b, a) for (int i = b; i >= a; i--)

void solve(int n)
{
    int a[32];
    int i = 0;
    while (n != 0)
    {
        a[i] = n % 2;
        n = n / 2;
        i++;
    }
    // cout << i << "\n";
    DEP(j, i - 1, 0)
    {
        cout << a[j];
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        solve(n);
    }

    return 0;
}
// =======================================================================