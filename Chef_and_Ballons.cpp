
//GOOD LUCK
//    | |      |    Ķ
//   (         |  Ķ
//    | |      |Ķ     
//       )     |  Ķ
//    | |   •  |    Ķ

//DATE: 09-12-2022 
//TIME: 22-55-00 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a)*(a)

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)
//#define forn(i,n) for (const int &n : numbers)
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define DEP(i, b, a) for (int i = b; i >= a; i--)

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);  
cout.tie(NULL); 
int t;
cin >> t;
while (t--) 
{
     int                                                                 r,g,b,k;
	    int                      r_prob,g_prob,b_prob;
	    cin>>r>>g>>b>>k;
        r_prob = (r>=k)?k-1:r;
        g_prob = (g>=k)?k-1:g;
        b_prob = (b>=k)?k-1:b;
	    cout<<(long long int)r_prob+g_prob+b_prob+1<<endl;
	    
}



return 0;
} 