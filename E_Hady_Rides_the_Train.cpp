// ETHN
// DATE: 13-09-2022
// TIME: 21-52-46
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    // long long int a[5][4] = {{0, 1, 2, 3}, {7, 6, 5, 4}, {8, 9, 10, 11}, {15, 14, 13, 12}, {16, 17, 18, 19}};

    // long long int n;
    // cin >> n;
    // int x, y;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         if (a[i][j] == n)
    //         {
    //             x = i;
    //             y = j;
    //             break;
    //         }
    //     }
    // }
    // cout << x << " " << y;

ll n;
cin>>n;

ll r=n/4;
ll c=n%4;

if(r%2==0)
{
 cout<<r<<" "<<c<<endl;
 
}
else
{
    c=abs(c-3);
    cout<<r<<" "<<c;
}


    return 0;
}