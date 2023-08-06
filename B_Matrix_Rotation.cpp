#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t; // read the number of test cases

  while (t--) { // for each test case
    int a, b, c, d;
    cin >> a >> b >> c >> d; // read the elements of the matrix

    // check if the matrix is beautiful
    if ((a < b && c < d) || (a < c && b < d) || (a < d && b < c) || (b < c && a < d) || (c < a && d < b) || (d < a && c < b)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
