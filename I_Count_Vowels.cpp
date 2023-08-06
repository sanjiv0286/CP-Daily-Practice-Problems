#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    cin.ignore();

    int ct = 0;
    for (int i = 0; i < s.size(); i++)
    {
        // tolower is a function in the C++ standard library that converts a character to lowercase. It takes a single character as input and returns the lowercase version of the character if it is an uppercase letter.
        // For example, if c is 'A', then tolower(c) would return 'a'. If c is 'a', then tolower(c) would return 'a'.
        char c = tolower(s[i]);
        if (c == ' ')
        {
            continue;
        }
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            ct++;
        }
    }
    cout << ct;

    return 0;
}
