#include <iostream>
using namespace std;

// Function to shift the array to the right by X times
void shift_array(int A[], int N, int X)
{
    // Shift the array right by X times
    for (int i = 0; i < X; i++)
    {
        // Save the last element of the array
        int last = A[N - 1];
        // Shift all elements to the right by one position
        for (int j = N - 1; j > 0; j--)
            A[j] = A[j - 1];
        // Put the last element at the beginning of the array
        A[0] = last;
    }
}

// int main()
// {
//   // Test the function
//   int A[] = {1, 2, 3};
//   int N = sizeof(A) / sizeof(A[0]);
//   int X = 1;
//   shift_array(A, N, X);
//   for (int i = 0; i < N; i++)
//     cout << A[i] << " ";  // Output: 3 1 2
//   return 0;
// }

int main()
{
    // Read N and X from the input
    int N, X;
    cin >> N >> X;
    // Read the array elements from the input
    int A[N];
    for (int i = 0; i < N; i++)
        cin >> A[i];
    // Shift the array and print the result
    shift_array(A, N, X);
    for (int i = 0; i < N; i++)
        cout << A[i] << " ";
    return 0;
}
// =============================================================
// #include <iostream>
// #include <algorithm> // for rotate function
// using namespace std;

// int main()
// {
//     // Read N and X from the input
//     int N, X;
//     cin >> N >> X;
//     // Read the array elements from the input
//     int A[N];
//     for (int i = 0; i < N; i++)
//         cin >> A[i];
//     // Shift the array to the right by X times using rotate
//     rotate(A, A + 1, A + N);

//     // Print the resulting array
//     for (int i = 0; i < N; i++)
//         cout << A[i] << " ";

//     return 0;
// }
// =============================================================