// Colorful Stones (Simplified Edition)

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    string s1, s2;
    cin >> s1 >> s2;
    int index = 1;
 
    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] == s1[index - 1])
            index++;
    }
 
    cout << index << endl;
 
    return 0;
}