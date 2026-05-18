// Count Vowels

#include <bits/stdc++.h>
using namespace std;
 
// Vowel letters: ['a', 'e', 'i', 'o', 'u']
int countVowels(string text, int i)
{
    if (i >= text.length())
        return 0;
 
    int counter = 0;
    char ch = tolower(text[i]);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        counter++;
 
    return counter + countVowels(text, ++i);
}
 
int main()
{
 
    string s;
    getline(cin, s);
    cout << countVowels(s, 0) << endl;
 
    return 0;
}