// Decoding

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    // abba
    // a
    // baba
 
    int n, index = 0;
    string text, newText = "";
    cin >> n >> text;
 
    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                // newText.insert(0, 1, text[index++]);
                newText = text[index++] + newText;
 
            else
                // newText.push_back(text[index++]);
                newText = newText + text[index++];
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                // newText.push_back(text[index++]);
                newText = newText + text[index++];
 
            else
                // newText.insert(0, 1, text[index++]);
                newText = text[index++] + newText;
        }
    }
 
    cout << newText << endl;
 
    return 0;
}