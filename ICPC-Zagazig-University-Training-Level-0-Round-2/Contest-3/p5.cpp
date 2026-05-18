// Soltan's Letter

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
 
    int freqS1[300] = {0}, freqS2[300] = {0};
    bool flag = 0;
 
    for (int i = 0; i < s1.length(); i++)
    {
        freqS1[s1[i]]++;
    }
 
    for (int i = 0; i < s2.length(); i++)
    {
        freqS2[s2[i]]++;
    }
 
    for (int i = 0; i < s2.length(); i++)
    {
 
        if (freqS1[s2[i]] == 0 || freqS1[s2[i]] < freqS2[s2[i]])
        {
            cout << "NO\n";
            flag = 1;
            break;
        }
    }
    
    if (!flag)
        cout << "YES\n";
 
    return 0;
}