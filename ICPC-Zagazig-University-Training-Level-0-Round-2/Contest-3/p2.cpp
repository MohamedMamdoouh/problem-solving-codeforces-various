// Soltan The Helpful

#include <bits/stdc++.h>
using namespace std;
 
bool isRedable(string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == '?')
            return 0;
    }
    return 1;
}
int main()
{
    string text;
    cin >> text;
 
    if (isRedable(text))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}