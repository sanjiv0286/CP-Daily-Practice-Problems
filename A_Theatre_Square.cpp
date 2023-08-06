#include <iostream>

using namespace std;

int main()
{
    // Read the dimensions of the theater square and the size of the flagstones
    int n, m, a;
    cin >> n >> m >> a;

    // Calculate the minimum number of flagstones needed to cover the theater square
    //   int numFlagstones = (n + a - 1) / a * (m + a - 1) / a;
    int numFlagstones = (n * m) / (a * a);//wrong

    // Print the result
    cout << numFlagstones << endl;

    return 0;
}
