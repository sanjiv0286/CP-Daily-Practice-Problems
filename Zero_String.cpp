// GOOD LUCK
//     | |      |    k
//    (         |  k
//     | |      |k
//        )     |  k
//     | |   •  |    k

// DATE: 02-02-2023
// TIME: 00-45-02
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)
// #define forn(i,n) for (const int &n : numbers)
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define dep(i, b, a) for (int i = b; i >= a; i--)

// #************ KEEP IN MIND ************#
// READ THE QUESTION PROPERLY [Many times if required]
// FIRST SOLVE ON PAPER AND GET THE CORRECT APPROACH THEN ONLY START CODING
//[This will save alot of time as well as lower incorrect submissions]
// DON'T GET STUCK ON ONE APPROACH [Try to think differently]
// TRY TO SOLVE SUBPROBLEMS OR FOR N==2,3,4.. FIRST THEN YOU MIGHT START SEEING SOMETHING
// DON'T REPEAT THE SAME MISTAKES DONE IN PREVIOUS CONTESTS
// #************ KEEP IN MIND ************#

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int zeros = count(s.begin(), s.end(), '0');
    int ones = n - zeros;
    cout << min(zeros + 1, ones) << endl;
}

int main()
{
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

// ==========================================================


// GOOD LUCK
//     | |      |    k
//    (         |  k
//     | |      |k
//        )     |  k
//     | |   •  |    k

// DATE: 02-02-2023
// TIME: 00-45-02
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)
#define all(a) a.begin(), a.end()

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)
// #define forn(i,n) for (const int &n : numbers)
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define dep(i, b, a) for (int i = b; i >= a; i--)

// #************ KEEP IN MIND ************#
// READ THE QUESTION PROPERLY [Many times if required]
// FIRST SOLVE ON PAPER AND GET THE CORRECT APPROACH THEN ONLY START CODING
//[This will save alot of time as well as lower incorrect submissions]
// DON'T GET STUCK ON ONE APPROACH [Try to think differently]
// TRY TO SOLVE SUBPROBLEMS OR FOR N==2,3,4.. FIRST THEN YOU MIGHT START SEEING SOMETHING
// DON'T REPEAT THE SAME MISTAKES DONE IN PREVIOUS CONTESTS
// #************ KEEP IN MIND ************#

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int zeroes = 0;
    int ones = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            zeroes++;
        else
            ones++;
    }
    if (ones == 0)
        cout << 0 << endl;
    else if (zeroes == 0)
        cout << 1 << endl;
    else if (ones > zeroes)
        cout << zeroes + 1 << endl;
    else
        cout << ones << endl;
}

int main()
{
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
