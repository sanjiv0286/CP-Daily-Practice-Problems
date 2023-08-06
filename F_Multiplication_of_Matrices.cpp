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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    int m1[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> m1[i][j];
        }
        // cout << endl;
    }
    // for (int i = 0; i < a; i++)
    // {
    //     for (int j = 0; j < b; j++)
    //     {
    //         cout << m1[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // ***************************************************************
    int c, d;
    cin >> c >> d;
    int m2[c][d];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cin >> m2[i][j];
        }
        // cout << endl;
    }
    // for (int i = 0; i < c; i++)
    // {
    //     for (int j = 0; j < d; j++)
    //     {
    //         cout << m2[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int m3[a][d];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            m3[i][j] = 0;
            for (int k = 0; k < b; k++)
            {
                m3[i][j] += m1[i][k] * m2[k][j];
            }
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
// ==========================================================================
// // the multiplication of two matrices taking input by the user
// public
// class Sam1
// {
// public
//     static void main(String[] args)
//     {
//         Scanner sc = new Scanner(System.in);
//         int a[][] = new int[3][3], b[][] = new int[3][3], c[][] = new int[3][3];
//         // int
//         // int
//         System.out.println("ENTER NUMBER IN FIRST MATRIX :");
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 System.out.println("ENTER NUMBER AT INDEX :[" + i + "][" + j + "]");
//                 a[i][j] = sc.nextInt();
//             }
//         }
//         System.out.println("ENTER NUMBER IN SECOND MATRIX :");
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 System.out.println("ENTER NUMBER AT INDEX :[" + i + "][" + j + "]");
//                 b[i][j] = sc.nextInt();
//             }
//         }
//         System.out.println("FIRST MATRIX:");
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 System.out.print(a[i][j] + " ");
//             }
//             System.out.println();
//         }
//         System.out.println("SECOND MATRIX:");
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 System.out.print(b[i][j] + " ");
//             }
//             System.out.println();
//         }
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 c[i][j] = 0;
//                 for (int k = 0; k < 3; k++)
//                 {
//                     c[i][j] += a[i][k] * b[k][j];
//                 }                                // end of k loop
//                 System.out.print(c[i][j] + " "); // printing matrix element
//             }                                    // end of j loop
//             System.out.println();                // new line
//         }
//     }