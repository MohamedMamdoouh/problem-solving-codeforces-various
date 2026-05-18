// Palindrome

#include <iostream>
#include <math.h>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <iomanip>
using namespace std;
 
string reverseString(string text)
{
 
    int varLength = text.length();
 
    for (int i = 0; i < (text.length() / 2); i++)
    {
        swap(text[i], text[(varLength - 1)]);
        varLength--;
    }
 
    return text;
}
 
int main (){
 
string text;
cin >> text;
 
if (reverseString(text) == text)
cout << "YES";
else
cout << "NO";
 
}