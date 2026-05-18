// in Cost String

#include <bits/stdc++.h>
using namespace std;
 
//THIS IS NOT MY CODE!
 
int main()
 
{
 
    string s;
    cin >> s;
 
    int a[125];
    for (int i = 'a'; i <= 'z'; i++)
        cin >> a[i];
 
    int ok = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '?')
            continue;
        else
        {
            ok = 0;
        }
    }
    if (ok == 1)
    {
        //?????????????
        cout << 0 << endl;
        for (int i = 0; i < s.size(); i++)
        {
            cout << 'a';
        }
        return 0;
    }
 
    if (s[0] == '?')
    {
        char right;
        int end;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == '?')
                continue;
            else
            {
                right = s[i];
                end = i - 1;
                break;
            }
        }
        int cost, mn = INT_MAX;
        char ch;
        for (int charr = 'a'; charr <= 'z'; charr++)
        {
            cost = abs(a[charr] - a[right]);
            if (cost < mn)
            {
                mn = cost;
                ch = (char)charr;
            }
        }
        for (int i = 0; i <= end; i++)
            s[i] = ch;
    }
    ///////
    if (s[s.size() - 1] == '?')
    {
        char left;
        int end;
        // aaa???
        for (int i = s.size() - 2; i >= 0; i--)
        {
            if (s[i] == '?')
                continue;
            else
            {
                left = s[i];
                end = i + 1;
                break;
            }
        }
        int cost, mn = INT_MAX;
        char ch;
        for (int charr = 'a'; charr <= 'z'; charr++)
        {
            cost = abs(a[charr] - a[left]);
            if (cost < mn)
            {
                mn = cost;
                ch = (char)charr;
            }
        }
        for (int i = s.size() - 1; i >= end; i--)
            s[i] = ch;
    }
    //////////////
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '?')
        {
            char right, left;
            int end;
            left = s[i - 1];
            // aa?????    b
            for (int st = i + 1; st < s.size(); st++)
            {
                if (s[st] == '?')
                    continue; //
                else
                {
                    right = s[st];
                    end = st - 1;
                    break;
                }
            }
            int mn = INT_MAX;
            char ch;
            for (int charr = 'a'; charr <= 'z'; charr++)
            {
                int cost = abs(a[left] - a[charr]) + abs(a[right] - a[charr]);
                if (cost < mn)
                {
                    mn = cost;
                    ch = (char)charr;
                }
            }
            for (int st = i; i <= end; i++)
                s[i] = ch;
        }
    }
    long long cost = 0;
    // abc
    // a['a']
    for (int i = 0; i < s.size() - 1; i++)
    {
        cost += abs(a[s[i]] - a[s[i + 1]]);
    }
    cout << cost << endl;
    cout << s << endl;
}