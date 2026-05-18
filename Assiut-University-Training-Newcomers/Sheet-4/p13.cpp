// Subsequence String


#include <bits/stdc++.h>
using namespace std;
 
bool isSub(string text, string sub)
{
    int key = 0;
 
    for (int i = 0; i < text.length(); i++)
    {
        if (sub[key] == text[i])
            key++;
    }
 
    return key == sub.length();
}
 
int main()
{
    string text;
    cin >> text;
 
    if (isSub(text, "hello"))
    cout << "YES";
    else
    cout << "NO";
}