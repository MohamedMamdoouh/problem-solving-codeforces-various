// Count

#include <iostream>
#include <math.h>
#include <cstring>
#include <string>
using namespace std;
 
 
int stringToInt(string text)
{
    int result = 0;
    for (int i = 0; i < text.length(); i++)
    {
     result = result * 10 + (text[i] - '0');
    }
 
    return result;
}
 
int sumOfDigits(int number)
{
    int  sum = 0;
 
    while (number > 0)
    {
        sum += (number % 10);
        number /= 10;
    }
 
    return sum;
}
 
int main()
{
 
 
    string myStr;
    cin >> myStr;
    long long sum=0;
 
    for (int i = 0; i < myStr.length(); i++)
    {
        sum += myStr[i] - '0';
    }
    
    cout << sum;
}