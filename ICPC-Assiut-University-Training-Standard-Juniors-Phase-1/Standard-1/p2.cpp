//Count characters

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    string s;
    cin >> s;
 
    int freqSmall[26] = {0}, freqCapital[26] = {0};
 
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            freqSmall[s[i] - 'a']++;
 
        else
            freqCapital[s[i] - 'A']++;
    }
  
    for (int i = 0; i < 26; i++)
    {
        if (freqCapital[i] != 0)
            cout << char('A' + i) << " " << freqCapital[i] << endl;
    }
 
    for (int i = 0; i < 26; i++)
    {
        if (freqSmall[i] != 0)
            cout << char('a' + i) << " " << freqSmall[i] << endl;
    }
 
    return 0;
}