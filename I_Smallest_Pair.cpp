//DATE: 18-03-2023 
//TIME: 06-51-03 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a)*(a)
#define all(a) a.begin(), a.end()

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)
//#define forn(i,n) for (const int &n : numbers)
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define dep(i, b, a) for (int i = b; i >= a; i--)

const double PI = 3.14;
//extern int x;

void solve()
{
ll n;
cin >> n;
ll v[n];
forn(i,n) 
{
cin>>v[i];
}
ll  ans =INT_MAX;
for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
       ll sum = v[i-1]+v[j-1]+j-i;
        ans = min(ans,sum);
    }
}
cout<<ans<<endl;
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