// From S To T

#include <bits/stdc++.h>
using namespace std;
 
bool isSubsequence(string text, string sub)
{
    int key = 0;
 
    for (int i = 0; i < text.length(); i++)
    {
        if (sub[key] == text[i])
            key++;
    }
 
    return key == sub.length();
}
 
int main()
{
 
    short q;
    string s, t, p;
 
    cin >> q;
 
    while (q--)
    {
        cin >> s >> t >> p;
 
        if (!isSubsequence(t, s))
        {
            cout << "no\n";
            continue;
        }
 
        vector<short> freqS(26, 0), freqT(26, 0), freqP(26, 0);
        bool flag = 0;
 
        for (char c : s)
            freqS[c - 'a']++;
        for (char c : t)
            freqT[c - 'a']++;
        for (char c : p)
            freqP[c - 'a']++;
 
        for (int i = 0; i < 26; i++)
        {
            if (freqT[i] > freqS[i] + freqP[i])
            {
                flag = 1;
                break;
            }
        }
 
        if (flag)
            cout << "no\n";
 
        else
            cout << "yes\n";
    }
 
    return 0;
}