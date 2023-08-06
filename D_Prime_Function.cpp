// #include <stdio.h>

// int main() {

//   int n, i, flag = 0;
//   printf("Enter a positive integer: ");
//   scanf("%d", &n);

//   // 0 and 1 are not prime numbers
//   // change flag to 1 for non-prime number
//   if (n == 0 || n == 1)
//     flag = 1;

//   for (i = 2; i <= n / 2; ++i) {

//     // if n is divisible by i, then n is not prime
//     // change flag to 1 for non-prime number
//     if (n % i == 0) {
//       flag = 1;
//       break;
//     }
//   }

//   // flag is 0 for prime numbers
//   if (flag == 0)
//     printf("%d is a prime number.", n);
//   else
//     printf("%d is not a prime number.", n);

//   return 0;
// }

// ==========================================================

// DATE: 09-12-2022
// TIME: 22-55-00
#include <bits/stdc++.h>
using namespace std;

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

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (is_prime(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    solve();

    return 0;
}