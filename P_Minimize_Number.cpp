// // important keep in mind
// // all_of(a.begin(), a.end(), [](int x){return x % 2 == 0;})

// // all_of: This is the name of the function we're calling from the <algorithm> library. 
// // It checks if a condition holds true for all elements in a range.
// // [](int x){return x % 2 == 0;}:
// // This is a lambda function that takes an integer argument x and returns a boolean value.
// // The lambda function checks if the integer x is even or not,
// //  by performing the modulo operation % with 2. 
// // If the result is 0, then x is even, and the lambda function returns true. 
// // Otherwise, x is odd, and the lambda function returns false..

// #include <iostream>
// #include<algorithm>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     int count = 0;
//     while (all_of(a.begin(), a.end(), [](int x){return x % 2 == 0;})) {
//         for (int i = 0; i < n; i++) {
//             a[i] /= 2;
//         }
//         count++;
//     }

//     cout << count << endl;
//     return 0;
// }

// =====================================================================
