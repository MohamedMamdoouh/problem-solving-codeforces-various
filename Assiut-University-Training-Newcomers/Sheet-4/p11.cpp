// I Love strings

#include <bits/stdc++.h>
using namespace std;
 
void mergeString(string text1, string text2)
{
 
    int minLength = min(text1.length(), text2.length());
    int key = 0;
 
    for (int i = 0; i < minLength; i++)
    {
        cout << text1[i] << text2[i];
        key = i;
    }
 
    if (text1.length() > text2.length())
        cout << text1.substr(key + 1);
 
    else if (text1.length() < text2.length())
        cout << text2.substr(key + 1);
}
 
int main()
{
    int number;
    // cout << "enter the number of test cases\n";
    cin >> number;
    string arrString[100];
 
    for (int i = 0; i < number * 2; i++)
    {
        // cout << "entet element " << i << " and " << i + 1 << endl;
        cin >> arrString[i] >> arrString[i + 1];
        i++;
    }
 
    for (int i = 0; i < number * 2; i++)
    {
        // cout << "\n the result of mergeString func is " << endl;
        mergeString(arrString[i], arrString[i + 1]);
        i++;
        cout << endl;
    }
}