
// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a)*(a)
// #define all(a) a.begin(), a.end()

// #define f first
// #define s second
// #define pb push_back
// #define mp make_pair

// #define forn(i, n) for (int i = 0; i < n; i++)
// //#define forn(i,n) for (const int &n : numbers)
// #define rep(i,a,b) for (int i = a; i <= b; i++)
// #define dep(i, b, a) for (int i = b; i >= a; i--)



// void solve()
// { 
// int n;
// cin >> n;
// int a[n],b[n];
// forn(i,n) 
// {
// cin>>a[i];
// }
// forn(i,n) 
// {
// cin>>b[i];
// }
// int mx1 = *max_element(a,a+n);
// int mx2 = *max_element(b,b+n);

// int ct=0;
// forn(i,n) 
// {
// swap(a[i],b[i]);
// int max1 = *max_element(a,a+n);
// int max2 = *max_element(b,b+n);
// if(max1 == mx1 && mx2 == max2){
//     ct++;
// }
// }
// // cout<<ct;
// if(ct==n){
//     cout<<"Yes"<<"\n";
// }
// else{
//     cout<<"No"<<"\n";
// }
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);  
// cout.tie(NULL); 
// ll t;
// cin >> t;
// while (t--) 
// {
// solve();
// }
// return 0;
// } 


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n),b(n);
        for(auto &x:a)cin>>x;
        for(auto &x:b)cin>>x;
        int mx = *max_element(a.begin(),a.end());
        int mx1 = *max_element(b.begin(),b.end());
        if(a[n-1] == mx && b[n-1] == mx1){
            cout<<"YES\n";
            continue;
        }
        swap(a[n-1],b[n-1]);
        mx = *max_element(a.begin(),a.end());
        mx1 = *max_element(b.begin(),b.end());
        if(a[n-1] == mx && b[n-1] == mx1){
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";
    }
    return 0;

}