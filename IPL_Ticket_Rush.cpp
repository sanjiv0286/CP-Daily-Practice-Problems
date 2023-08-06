//DATE: 12-04-2023 
//TIME: 21-28-45 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a)*(a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
//extern int x;

void solve()
{
    int n,m;
    cin>>n>>m;
    if(n>m){
        cout<<n-m<<"\n";
    }
    else{
        cout<<0<<"\n";
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);  
cout.tie(NULL); 
ll t;
cin >> t;
while (t--) 
{
solve();
}

return 0;
} 
