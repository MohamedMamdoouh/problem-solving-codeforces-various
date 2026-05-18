// Conversion

#include <bits/stdc++.h>
using namespace std;
 
string stringConversion(string text)
{
 
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = text[i] - 32;
        }
 
        else if (text[i] >= 'A' && text[i] <= 'Z')
        {
           text[i] = text[i] + 32; 
        }
 
        else if (text[i] == 44)
        {
           text[i] = 32; 
        }
    }
 
    return text;
}
 
int main()
{
 
    string text;
    cin >> text;
 
    cout << stringConversion(text);
}