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
    bool flag = 0;
    string str;
    cin >> str;
    int lenSt = str.length();
 
    for (int i = 1; i < str.length()-1; i++)
    {
 
        if (isVowel(str[i]) == 1 && (isVowel(str[i - 1]) == 0 && isVowel(str[i + 1]) == 0))
        {
            str.erase(i, 1);
        }
    }
 
    cout << str;
    return 0;
}