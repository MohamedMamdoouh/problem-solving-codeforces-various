// Count Letters

#include <bits/stdc++.h>
using namespace std;
 
 
void countLetters(string text)
{
    int arr[26] = {0};
 
    for (int j = 0; j < text.length(); j++)
    {
        arr[text[j] - 'a']++;
    }
 
    for (int k = 0; k < 26; k++)
    {
        if (arr[k] != 0)
        cout << char(k + 'a') << " : " << arr[k] << endl;
    }
}
 
int main()
{
 
    string text;
    cin >> text;
 
    countLetters(text);
}