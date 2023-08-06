
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

#define forn(i, n) for (int i = 0; i < n; i++)
// #define forn(i,n) for (const int &n : numbers)
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define DEP(i, b, a) for (int i = b; i >= a; i--)

bool is_prime(int n)
{

    if (n == 1 || n == 0)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    // for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

// Count the palindrome numbers in the array.
int count_palindromes(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        // Check if A[i] is palindrome
        // In the line of code string num = to_string(arr[i]);
        //  to_string is a function that converts a number(integer or floating point) to a string.
        string num = to_string(arr[i]);
        string rev_string = string(num.rbegin(), num.rend());
        if (num == rev_string)
        {
            count++;
        }
    }
    // cout << count << "\n";
    return count;
}



int getNumberWithMaxDivisors(int arr[], int n)
{
    int maxDivisors = 0;
    int maxNumber = 0;
    for (int i = 0; i < n; i++)
    {
        int divisors = 0;
        for (int j = 1; j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                divisors++;
            }
        }
        if (divisors > maxDivisors || (divisors == maxDivisors && arr[i] > maxNumber))
        {
            maxDivisors = divisors;
            maxNumber = arr[i];
        }
    }
    return maxNumber;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int n, i;
    cin >> n;
    int arr[n];
    forn(i, n)
    {
        cin >> arr[i];
    }
    int a = *max_element(arr, arr + n);
    cout << "The maximum number : " << a << "\n";
    int b = *min_element(arr, arr + n);
    cout << "The minimum number : " << b << "\n";
    int ct = 0;
    forn(i, n)
    {
        if (is_prime(arr[i]))
        {
            // cout << "YES" << endl;
            ct++;
        }
        // else
        //     cout << "NO" << endl;
    }
    cout << "The number of prime numbers : " << ct << "\n";

    cout << "The number of palindrome numbers : " << count_palindromes(arr, n) << endl;
    cout << "The number that has the maximum number of divisors : " << getNumberWithMaxDivisors(arr, n) << endl;

    return 0;
}

// ===============================================================
// #include <iostream>
// using namespace std;

// int main()
// {
//      int n, num, digit, rev = 0;

//      cout << "Enter a positive number: ";
//      cin >> num;

//      n = num;

//      do
//      {
//          digit = num % 10;
//          rev = (rev * 10) + digit;
//          num = num / 10;
//      } while (num != 0);

//      cout << " The reverse of the number is: " << rev << endl;

//      if (n == rev)
//          cout << " The number is a palindrome.";
//      else
//          cout << " The number is not a palindrome.";

//     return 0;
// }
// ======================================================================