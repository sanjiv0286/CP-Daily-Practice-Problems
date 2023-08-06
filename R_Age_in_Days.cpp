// ETHN
// DATE: 24-09-2022
// TIME: 16-36-12

#include <bits/stdc++.h>
using namespace std;

int main()
{

     int n, year, month, days;
     cin >> n;
     year = n / 365;
     month = (n % 365) / 30;

     days = ((n % 365) % 30) / 1;
     cout << year << " "
          << "years" << endl;
     cout << month << " "
          << "months" << endl;
     cout << days << " "
          << "days" << endl;

     return 0;
}
