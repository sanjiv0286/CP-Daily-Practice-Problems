// #include <bits/stdc++.h>
// using namespace std;
// const int N = 26;
// string check(string p)
// {
//     int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // create array for storing number of alphbates
//     int flag = 0;
//     for (int i = 0; i < p.size(); i++)
//     {
//         arr[p[i] - 'a']++; // increamenting number of alphabates at there index
//     }
//     for (int i = 0; i < N; i++)
//     {
//         if (arr[i] > 1) // checking if the are counted more than 1 times.
//         {
//             flag = 1;
//         }
//     }
//     if (flag == 1)
//     {
//         return "Yes";
//     }
//     else
//     {
//         return "No";
//     }
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string p;
//         cin >> p;
//         cout << check(p) << endl;
//     }
// }

// Xsquare And Double Strings
// hackerEarth

// #include <bits/stdc++.h>

// using namespace std;

// const int n = 123;
// int has[n];

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         string name;
//         cin >> name;
//         // cout << name << " " << name.length();
//         // cout << endl;

//         for (int i = 0; i <= name.length(); i++)
//         {
//             // cout << int(name[0]) ;
//             has[int(name[i])]++;
//             // cout << has[int(name[i])];
//         }
//         // cout << endl;
//         // for (int i = 0; i <= name.length() - 1; i++)
//         // {
//         //     cout << int(name[i]) << "->" << has[int(name[i])] << endl;
//         // }
//         // cout << endl;
//         // int count = 0;
//         // for (int i = 0; i < n; i++)
//         // {
//         //     if (has[i] % 2 == 0 && has[i] != 0)
//         //         count++;
//         // }

//         // cout << count << endl;

//         int z = 0;

//         for (int i = 97; i <= 122; i++)
//         {
//             if (has[i] >= 2)
//             {
//                 z++;
//             }

//             // cout << has[i] << endl;
//         }
//         // cout << z;
//         // char r = 'n';
//         // cout << int(r);
//         if (z >= 1)
//         {
//             cout << "Yes" << endl;
//         }
//         else
//         {
//             cout << "No" << endl;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             has[i] = 0;
//         }
//     }
// }

// ============================================================

#include <bits/stdc++.h>
using namespace std;
const int n = 123;
int has[n];

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string name;
        cin >> name;

        for (int i = 0; i <= name.length(); i++)
        {
            cout << int(name[i]);
            has[int(name[i])]++;
        }
        int z = 0;
        for (int i = 97; i <= 122; i++)
        {
            if (has[i] >= 2)
            {
                z++;
            }
        }
        if (z >= 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        for (int i = 0; i < n; i++)
        {
            has[i] = 0;
        }
    }
}