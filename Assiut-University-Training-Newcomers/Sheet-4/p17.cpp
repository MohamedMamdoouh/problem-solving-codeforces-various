// Reverse Words

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    string st;
    getline(cin, st);
    st+=" ";
    string st2;
    st2 = st;
    int key = 0;
 
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] == ' ')
        {
            reverse(st2.begin() + key, st2.begin() + i);
            cout << st2.substr(key, i - key);
            if (st2.length() > i + 1)
            cout << " ";
            key = i + 1;
        }
    }
}