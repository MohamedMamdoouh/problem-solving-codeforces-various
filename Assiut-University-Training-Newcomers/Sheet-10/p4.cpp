// Hussien and Strings

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s1, s2;
    bool flag = 0;
    cin >> s1 >> s2;
 
    if (s1.length() != s2.length())
    {
        cout << "NO\n";
        return 0;
    }
 
    if (s1 == s2)
    {
        sort(s1.begin(), s1.end());
 
        for (int i = 0; i < s1.size() - 1; i++)
        {
            if (s1[i] == s1[i + 1])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
            return 0;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
 
    vector<int> diff;
 
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i])
            diff.push_back(i);
    }
 
    if (diff.size() == 2)
    {
        swap(s1[diff[0]], s1[diff[1]]);
 
        if (s1 == s2)
            cout << "YES\n";
 
        else
            cout << "NO\n";
    }
 
    else
    {
        cout << "NO\n";
    }
 
    return 0;
}