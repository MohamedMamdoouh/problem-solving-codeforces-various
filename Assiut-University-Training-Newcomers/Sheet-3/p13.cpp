//  Minimize Number

#include <bits/stdc++.h>
using namespace std;
 
void readArray(int arr[], int &arrLength)
{
 
    cin >> arrLength;
 
    for (int i = 0; i < arrLength; i++)
    {
        cin >> arr[i];
    }
}
 
bool isAllEven(int arr[], int &arrLen)
{
 
    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] % 2 != 0)
            return 0;
    }
    return 1;
}
 
void divideByTwo(int arr[], int &arrLen)
{
 
    for (int i = 0; i < arrLen; i++)
    {
        arr[i] /= 2;
    }
}
 
int main()
{
 
    int arr[1000];
    int arrLen;
    int counter = 0;
 
    readArray(arr, arrLen);
 
    while (isAllEven(arr, arrLen))
    {
        counter++;
        divideByTwo(arr, arrLen);
    }
 
    cout << counter << endl;
 
    return 0;
}