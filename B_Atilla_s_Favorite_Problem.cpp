//DATE: 09-06-2023 
//TIME: 14-17-42 
#include<bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define sq(a) (a)*(a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
//extern int x;

int gcd(int a, int b){
while (b != 0)
{
int rem = a % b;
a = b;
b = rem;
}
 return a;
}

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    // cout<<s<<endl;
    cout<<(int)s[n-1]-'a'+1<<endl;

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
