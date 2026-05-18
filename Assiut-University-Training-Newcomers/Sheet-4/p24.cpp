// Comparison 

#include <bits/stdc++.h>
using namespace std;
 
string comparison(string text)
{
    if (text.length() < 2)
       return text;
 
    string s1 = "", s2 = "", s1PlusS2 = "";
    string minString = text;
 
    for (int i = 0; i < text.length() - 1; i++)
    {
        s1 = text.substr(i + 1);
        // cout << "s1 is " << s1 << endl;
        sort(s1.begin(), s1.end());
        // cout << "s1 after sort is " << s1 << endl;
 
        s2 = text.substr(0, i + 1);
        // cout << "s2 is " << s2 << endl;
        sort(s2.begin(), s2.end());
        // cout << "s2 after is " << s2 << endl;
 
        minString = min(minString, s2 + s1);
        // cout << arrString[i] << endl;
    }
 
    return minString;
}
 
int main()
{
 
    string text;
    cin >> text;
    cout << comparison(text) << endl;
    return 0;
}