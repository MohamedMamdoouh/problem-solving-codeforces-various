// Postcard

#include <bits/stdc++.h>
using namespace std;
 
enum enStirngType
{
    DoesNotContain = 1,
    ContainsOnlyQM = 2,
    ContainsOnlyAstrict = 3,
    ContainsBoth = 4
};
 
enStirngType StringType(string s)
{
    if (s.find('?') != string::npos && s.find('*') == string::npos)
        return enStirngType::ContainsOnlyQM;
 
    else if (s.find('?') == string::npos && s.find('*') != string::npos)
        return enStirngType::ContainsOnlyAstrict;
 
    else if (s.find('?') == string::npos && s.find('*') == string::npos)
        return enStirngType::DoesNotContain;
 
    else if (s.find('?') != string::npos && s.find('*') != string::npos)
        return enStirngType::ContainsBoth;
 
    return enStirngType::DoesNotContain;
}
 
string mainChars(string s)
{
    // hw?ap*yn?eww*ye*ar
    // Main chars are chars which is not followed by '*' or '?'
    string mainCh = "";
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i + 1] != '?' && s[i + 1] != '*' && s[i] != '?' && s[i] != '*')
            mainCh += s[i];
    }
 
    if (isalpha(s[s.length() - 1]))
        mainCh += s[s.length() - 1];
 
    return mainCh;
}
 
string RemoveNonMainChars(string s)
{
    // gfkesp?jh?enf?rnu?riyu?mcvtswlzerx?mumzrqh?aqbbdujqwdwezqrsn?hqxpxsq?rh?cqgzxlchgtoyevlrojxovstvo?bw
    // Main chars are chars which is not followed by '*' or '?'
    for (int i = 0; i < s.length();)
    {
        if (s[i] == '?' || s[i] == '*')
            s.erase(i - 1, 2);
 
        else
            i++;
    }
    return s;
 
    // ab?a
    // 3
}
 
string IfDoesNotContain(string s, int k)
{
    if (k != s.length())
        return "Impossible";
 
    else
        return s;
}
 
string ifContainsAstrict(string s, int k)
{
    string mainCh = mainChars(s);
    int mainChLen = mainCh.length();
    int counter = 0;
 
    while (k != (mainCh.length() + counter))
    {
        counter++;
        int index = s.find('*');
        s.insert(index, 1, s[index - 1]);
    }
 
    return RemoveNonMainChars(s);
}
 
string ifContainsOnlyQM(string s, int k)
{
    // gfkesp?jh?enf?rnu?riyu?mcvtswlzerx?mumzrqh?aqbbdujqwdwezqrsn?hqxpxsq?rh?cqgzxlchgtoyevlrojxovstvo?bw
    // 79
 
    string mainCh = mainChars(s);
    int counter = 0;
 
    if (k == mainCh.length())
        return mainCh;
 
    for (int i = 0; i < s.length();)
    {
        if (isalpha(s[i]) && (s[i + 1] == '?'))
        {
            s.erase(i + 1, 1);
            counter++;
 
            if (mainCh.length() + counter == k)
                return RemoveNonMainChars(s);
        }
 
        else
            i++;
    }
    if (s.length() == k)
        return s;
 
    else
        return "Impossible";
}
 
int main()
{
 
    // string s;
    // int k;
    // cin >> s >> k;
 
    // cout << ifContainsAstrict(s,k) << endl;
    // // cout << mainChars(s).length() << endl;
 
    string s;
    int k;
    cin >> s >> k;
 
    string mainCh = mainChars(s);
 
    if (mainCh.length() > k)
    {
        cout << "Impossible\n";
        return 0;
    }
 
    else
    {
        if (StringType(s) == enStirngType::DoesNotContain)
            cout << IfDoesNotContain(s, k) << endl;
 
        else if (StringType(s) == enStirngType::ContainsBoth || StringType(s) == enStirngType::ContainsOnlyAstrict)
            cout << ifContainsAstrict(s, k) << endl;
 
        else
            cout << ifContainsOnlyQM(s, k) << endl;
    }
 
    return 0;
}
 
/*
 
? =>  remove or leave
* => remove or leave or repeat
 
*/