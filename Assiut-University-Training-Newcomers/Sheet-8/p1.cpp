// Palindromes Replace

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    // a?z?
    // a?za
    bool flag = 0;
    string st;
    cin >> st;
 
    for (int i = 0, j = st.length() - 1; i <= j; i++, j--)
    {
        if (st[i] == '?' && st[j] == '?')
            st[i] = st[j] = 'a';
 
        else if (st[i] == '?' && st[j] != '?')
            st[i] = st[j];
 
        else if (st[j] == '?' && st[i] != '?')
            st[j] = st[i];
 
        else if (st[i] != st[j])
        {
            flag = 1;
            break;
        }
    }
 
    if (!flag)
        cout << st << endl;
 
    else
        cout << -1 << endl;
 
    return 0;
}