// Update String

#include <iostream>
using namespace std;
 
bool isVowel(char ch)
{
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
 
int main()
{
    // Vowel charctars are:'a','e','i','o','u'.
 
    string str;
    cin >> str;
    int lenSt = str.length();
    for (int i = 0; i < str.length(); i++)
    {
        if (isVowel(str[0]) || isVowel(str[lenSt - 1]))
            continue;
 
        else
        {
            if (isVowel(str[i]) == 1 && (isVowel(str[i - 1]) == 0 && isVowel(str[i + 1]) == 0))
            {
                str.erase(i, 1);
            }
        }
    }
 
    cout << str << endl;
 
    return 0;
}