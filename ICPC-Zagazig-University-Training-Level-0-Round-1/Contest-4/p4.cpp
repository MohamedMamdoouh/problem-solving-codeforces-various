// Shaarawy likes Flexing

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    string s;
    cin >> s;
 
    int freqArr[27] = {0};
 
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]) && i > 0)
            freqArr[s[i - 1] - 'a'] += s[i] - '0';
 
        else
            freqArr[s[i] - 'a']++;
    }
 
    for (int i = 26; i >= 0; i--)
    {
        while (freqArr[i]--)
        {
            cout << (char)(i + 'a');
        }
    }
 
    return 0;
}