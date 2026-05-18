// Soltan and Boring String

#include <bits/stdc++.h>
using namespace std;
 
bool isBoring(string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] != 'a')
        {
            if (text[i] != 'b')
                return 0;
        }
    }
    return 1;
}
 
int main()
{
 
    string text;
    cin >> text;
 
    if (isBoring(text))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}