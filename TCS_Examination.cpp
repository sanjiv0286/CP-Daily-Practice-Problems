//GOOD LUCK
//    | |      |    k
//   (         |  k
//    | |      |k     
//       )     |  k
//    | |   •  |    k   •

//#************ KEEP IN MIND ************#
//'Concepts' >>>> 'Contest'
//'Think' >>>> 'Code'
//Try to think step by step optimize approach
//Pratice
//#************ KEEP IN MIND ************#

//DATE: 07-03-2023 
//TIME: 11-03-54 
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

#define vin(name, size) for (i = 0; i < size; i++) cin >> name[i] 
#define vout(name)  for (i = 0; i < name.size(); i++) cout << name[i];cout << endl
#define vvin(name, rowss, colmn)  for (i = 0; i < rowss; i++)  {    for (j = 0; j < colmn; j++)   cin >> name[i][j];  }
#define vvout(name, rowss, colmn) for (i = 0; i < rowss; i++){    for (j = 0; j < colmn; j++) cout << name[i][j]; cout << endl; }

const double PI = 3.14;
//extern int x;

//#************ KEEP IN MIND ************#
//READ THE QUESTION PROPERLY [Many times if required]
//FIRST SOLVE ON PAPER AND GET THE CORRECT APPROACH THEN ONLY START CODING
//[This will save alot of time as well as lower incorrect submissions]
//DON'T GET STUCK ON ONE APPROACH [Try to think differently]
//TRY TO SOLVE SUBPROBLEMS OR FOR N==2,3,4.. FIRST THEN YOU MIGHT START SEEING SOMETHING
//DON'T REPEAT THE SAME MISTAKES DONE IN PREVIOUS CONTESTS
//*************************************************************
// To reduce execution time - Iterative sol > Recursive sol 
// Graph bfs solutions are faster than dfs solutions
//List comprehension is faster than for loops
//If the array contains large numbers then don't do this --> a=list(set(a))
//#************ KEEP IN MIND ************#

void solve()
{int a,b,c;
cin>>a>>b>>c;
int d,e,f;
cin>>d>>e>>f;
if(a+b+c>d+e+f){
    cout<<"DRAGON"<<"\n";
}
else if(d+e+f>a+b+c){
    cout<<"SLOTH"<<"\n";
}
else{
    if(a>d){
    cout<<"DRAGON"<<"\n";
    }
    else if(d>a){
    cout<<"SLOTH"<<"\n";
}
else{
    if(b>e){
    cout<<"DRAGON"<<"\n";
    }
    else if(e>b){
    cout<<"SLOTH"<<"\n";

    }
    else{
        if(c>f){
    cout<<"DRAGON"<<"\n";
        }
         else if(f>c){
    cout<<"SLOTH"<<"\n";

    }
    else{
        cout<<"TIE"<<"\n";
    }
    }
}
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