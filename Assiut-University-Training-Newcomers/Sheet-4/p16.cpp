// Count Words

#include <iostream>
#include <math.h>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <iomanip>
#include <cctype>
using namespace std;
 
int calcWordInString_2(string text){
int counter=0;
for (int i = 0; i < text.length(); i++)
{
     if (isalpha(text[i]) && !(isalpha(text[i+1])) )
     counter++;
}
return counter;
 
}
 
int main()
{
    string text;
    getline(cin, text);
 
    cout << calcWordInString_2(text);
}