// ETHN
// DATE: 21-09-2022
// TIME: 09-23-32

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
  ll a, b, c, d, diff;
  // int a, b, c, d ,diff, m1, m2;
  cin >> a >> b >> c >> d;
  // m1 = a * b;
  // m2 = c * d;
  // diff = m1 - m2;
  diff = (a * b) - (c * d);
  cout << "Difference = " << diff << endl;
  return 0;
}