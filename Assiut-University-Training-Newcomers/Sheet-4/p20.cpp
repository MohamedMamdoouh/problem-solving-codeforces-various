// URL

#include <bits/stdc++.h>
using namespace std;
 
void URL(string text)
{
    
//http://www.cleartrip.com/signin/service?username=test&pwd=test&profile=developer&role=ELITE&key=manager
 
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == '?')
        {
            i++;
            while (i < text.length())
            {
                if (text[i] == '=')
                    cout << ": ";
                else if (text[i] == '&')
                    cout << endl;
                else
                    cout << text[i];
                i++;
            }
        }
    }
}
 
int main()
{
 
    string text;
    cin >> text;
 
    URL(text);
    return 0;
}