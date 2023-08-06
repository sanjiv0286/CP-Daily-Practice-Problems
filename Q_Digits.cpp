// CODE WRITTEN BY SK
// DATE: 26-10-2022
// TIME: 14-18-27
#include <bits/stdc++.h>
using namespace std;
#define ll long long

template <typename A, typename B>
string to_string(pair<A, B> p);

template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p);

template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p);

string to_string(const string &s)
{
    return '"' + s + '"';
}

string to_string(char c)
{
    string s;
    s += c;
    return s;
}

string to_string(const char *s)
{
    return to_string((string)s);
}

string to_string(bool b)
{
    return (b ? "1" : "0");
}

string to_string(vector<bool> v)
{
    bool first = true;
    string res = "{";
    for (int i = 0; i < static_cast<int>(v.size()); i++)
    {
        if (!first)
        {
            res += ", ";
        }
        first = false;
        res += to_string(v[i]);
    }
    res += "}";
    return res;
}

template <size_t N>
string to_string(bitset<N> v)
{
    string res = "";
    for (size_t i = 0; i < N; i++)
    {
        res += static_cast<char>('0' + v[i]);
    }
    return res;
}

template <typename A>
string to_string(A v)
{
    bool first = true;
    string res = "{";
    for (const auto &x : v)
    {
        if (!first)
        {
            res += ", ";
        }
        first = false;
        res += to_string(x);
    }
    res += "}";
    return res;
}

template <typename A, typename B>
string to_string(pair<A, B> p)
{
    return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p)
{
    return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ")";
}

template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p)
{
    return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ", " + to_string(get<3>(p)) + ")";
}

void debug_out() { cerr << endl; }

template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T)
{
    cerr << " " << to_string(H);
    debug_out(T...);
}

void Clearing_out() { return; }

template <typename Head, typename... Tail>
void Clearing_out(Head &H, Tail &...T)
{
    H.clear();
    Clearing_out(T...);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int size = n.size();
        for (int i = size - 1; i >= 0; i--)
        {
            cout << n[i] << " ";
        }
        cout << "\n";
    }

    // int n;
    // cin>>n;
    //     int reverse = 0;
    //     while (n != 0)
    //     {
    //         int rem = n % 10;
    //         int reverse = reverse * 10 + rem;
    //         n = n / 10;
    //     }
    //     cout << reverse << " ";
    //     cout << "\n";
    // }

    return 0;
}