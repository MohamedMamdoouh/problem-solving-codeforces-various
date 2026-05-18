// Soltan and the Universal String

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    bool flag = 0;
    cin >> t;
    string s;
 
    while (t--)
    {
        cin >> s;
        flag = 0;
 
        for (int i = 0; i < s.length() - 1; i++)
        {
            if ((s[i + 1] != s[i] + 1 && s[i] != 'z') || s[i] == 'z' && s[i + 1] != 'a')
            {
                flag = 1;
                break;
            }
        }
 
        if (!flag)
            cout << "YES\n";
 
        else
            cout << "NO\n";
    }
 
    return 0;
}