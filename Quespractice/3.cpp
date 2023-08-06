// #include <iostream>
// #include <vector>

// using namespace std;

// const int MOD = 1e9 + 7;

// int digitSum(int num)
// {
//     int sum = 0;
//     while (num > 0)
//     {
//         sum += num % 10;
//         num /= 10;
//     }
//     return sum;
// }

// int countGoodIntegers(string num1, string num2, int min_sum, int max_sum)
// {
//     // Convert num1 and num2 to integers
//     int n1 = stoi(num1);
//     int n2 = stoi(num2);

//     // Initialize variables
//     int count = 0;
//     vector<int> prefixSum(n2 + 1);

//     // Calculate prefix sum of digit sums
//     for (int i = 1; i <= n2; i++)
//     {
//         prefixSum[i] = prefixSum[i - 1] + (min_sum <= digitSum(i) && digitSum(i) <= max_sum);
//     }

//     // Count good integers in the range [n1, n2]
//     count = (prefixSum[n2] - prefixSum[n1 - 1] + MOD) % MOD;

//     return count;
// }

// int main()
// {
//     string num1;
//     string num2;
//     int min_sum;
//     int max_sum;
//     cin >> num1 >> num2 >> min_sum >> max_sum;

//     int result = countGoodIntegers(num1, num2, min_sum, max_sum);
//     cout << "Result: " << result << endl;

//     return 0;
// }
#include <iostream>

using namespace std;

const int MOD = 1e9 + 7;

int digitSum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int countGoodIntegers(string num1, string num2, int min_sum, int max_sum)
{
    int count = 0;

    for (int i = stoi(num1); i <= stoi(num2); i++)
    {
        int sum = digitSum(i);
        if (sum >= min_sum && sum <= max_sum)
        {
            count++;
        }
    }

    return count % MOD;
}

int main()
{
    string num1 = "1";
    string num2 = "12";
    int min_sum = 1;
    int max_sum = 8;

    int result = countGoodIntegers(num1, num2, min_sum, max_sum);
    cout << "Result: " << result << endl;

    return 0;
}
