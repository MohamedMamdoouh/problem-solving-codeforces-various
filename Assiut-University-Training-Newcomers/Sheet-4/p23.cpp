// Encrypt & Decrypt Message

#include <bits/stdc++.h>
using namespace std;
 
string encryptAndDecrypt(string text, short choice)
{
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    short index;
 
    if (choice == 1)
    {
        for (int i = 0; i < text.length(); i++)
        {
            index = original.find(text[i]);
            text[i] = key[index];
        }
    }
 
    else
    {
        for (int i = 0; i < text.length(); i++)
        {
            index = key.find(text[i]);
            text[i] = original[index];
        }
    }
 
    return text;
}
 
int main()
{
    short choice;
    cin >> choice;
 
    string text;
    cin >> text;
 
    cout << encryptAndDecrypt(text, choice) << endl;
    return 0;
}