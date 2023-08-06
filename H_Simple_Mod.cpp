// ETHN
// DATE: 12-09-2022
// TIME: 14-22-47
#include <bits/stdc++.h>
using namespace std;
const int a=1e9;

int main()
{
    int n,i,j;
    cin >> n;
    
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(  ((i*i)+(j*j))%n==0)
            {
                cout<<i<<" "<<j<<endl;
                break;
            }
        }
    }

    if( (i==(a-1)) and (j==(a-1)) )
    {
        cout<<"no"<<endl;
    }

}