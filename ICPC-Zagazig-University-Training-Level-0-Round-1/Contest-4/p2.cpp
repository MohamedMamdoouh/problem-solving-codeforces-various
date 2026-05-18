// Enough With Short Problems!

#include <bits/stdc++.h>
using namespace std;
 
bool isSubsequence(string st1, string st2)
{
    // Is st1 subsequence from st2
    int i = 0, j = 0;
 
    while (i < st1.length() && j < st2.length())
    {
        if (st1[i] == st2[j])
        {
            i++;
        }
        j++;
    }
 
    return i == st1.length();
}
 
bool isSubstring(string st1, string st2)
{
    // is st1 substring from st2
    for (int i = 0; i < st1.length(); i++)
    {
        if (st1.find(st1[i]) != st2.find(st1[i]))
            return 0;
    }
    return 1;
}
 
int main()
{
    int n, m;
    string s, t;
    cin >> n >> m;
    cin >> s >> t;
 
    if (isSubsequence(t, s) == 1 && isSubstring(t, s) == 0)
        cout << "Yes\n";
    else
        cout << "No\n";
 
    return 0;
}