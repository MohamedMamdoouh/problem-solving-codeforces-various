// Compare

#include <iostream>
#include <math.h>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <iomanip>
using namespace std;
 
string smallestLexicographical(string text1, string text2)
{
 
    int minLen = min(text1.length(), text2.length());
 
    for (int i = 0; i < minLen; i++)
    {
        if (text1[i] < text2[i])
            return text1;
 
        else if (text1[i] > text2[i])
            return text2;
    }
 
    if (text1.length() > text2.length())
        return text2;
    else if (text1.length() < text2.length())
        return text1;
    else
        return text1;
}
 
int main()
{
 
    string myString1, myString2;
    cin >> myString1 >> myString2;
 
    cout << smallestLexicographical(myString1, myString2);
}