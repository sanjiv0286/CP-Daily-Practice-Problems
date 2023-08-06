
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,v;
    cin>>n>>k>>v;
int sum=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    int d=(v*(n+k))-sum;
    // cout<<d<<"\n";

    if (d> 0 && d%k == 0){
        cout<<d/k<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  
    cout.tie(NULL); 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
} 
