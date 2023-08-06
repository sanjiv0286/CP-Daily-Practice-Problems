//DATE: 30-03-2023 
//TIME: 14-38-56 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a)*(a)
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)

const double PI = 3.14;
//extern int x;



int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);  
cout.tie(NULL); 
int n;
cin>>n;
string s="";
while(n--){
char a;
cin>>a;
if(n%2){
    s = a + s;
}
else{
    s= s + a;
}
}
cout<<s;

return 0;
} 
