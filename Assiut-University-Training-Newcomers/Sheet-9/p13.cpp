// !Palindromes

#include <bits/stdc++.h>
using namespace std;
 
bool isPalindrome(string text)
{
    string textRev = text;
    reverse(textRev.begin(), textRev.end());
    return textRev == text;
}
 
bool someCase(string text)
{
    // aaaaaaaaa or bbbbbbbbb, and so on
 
    for (int i = 0; i < text.length() - 1; i++)
    {
        if (text[i] != text[i + 1])
            return 0;
    }
    return 1;
}
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    string s;
    cin >> s;
    int size = s.length();
 
    if (someCase(s))
    {
        cout << "0" << endl;
        return 0;
    }
 
    if (isPalindrome(s))
        cout << size - 1 << endl;
 
    else
        cout << size << endl;
 
    return 0;
}