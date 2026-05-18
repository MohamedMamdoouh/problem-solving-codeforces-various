// Delete from the Left

#include <bits/stdc++.h>
using namespace std;

int deleteFromLeft(string s1, string s2)
{
    int len1 = s1.length() - 1, len2 = s2.length() - 1, counter = 0;
    while ((len1 >= 0 && len2 >= 0) && (s1[len1] == s2[len2]))
    {
        counter++;
        len1--;
        len2--;
    }
 
    return ((s1.length() - counter) + (s2.length() - counter));
}
 
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
 
    cout << deleteFromLeft(s1, s2);
 
    return 0;
}
