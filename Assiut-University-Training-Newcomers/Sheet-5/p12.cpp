// New Array

#include <bits/stdc++.h>
using namespace std;
 
void readArray(int arr[], int &arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cin >> arr[i];
    }
}
 
int main()
{
 
    int arrA[10000];
    int arrB[10000];
    int arrLength;
 
    cin >> arrLength;
    readArray(arrA, arrLength);
    readArray(arrB, arrLength);
 
    for (int i = 0; i < arrLength; i++)
    {
        cout << arrB[i] << " ";
    }
 
    for (int j = 0; j < arrLength; j++)
    {
        cout << arrA[j] << " ";
    }
 
    return 0;
}