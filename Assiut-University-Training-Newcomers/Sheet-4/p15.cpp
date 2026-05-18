// Sort String

#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
 
int main()
{
 
    int arr[123] = {0};
    int myStrLength;
    cin >> myStrLength;
 
    for (int i = 0; i < myStrLength; i++)
    {
        char s;
        cin >> s;
        arr[s]++;
    }
 
    for (int i = 0; i < 123; i++)
    {
        if(arr[i]!=0)
        while (arr[i]--)
        cout << char (i);
    }
    
}