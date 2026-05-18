// Shift Zeros

#include <bits/stdc++.h>
using namespace std;
 
void readArray(int arr[], int &arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cin >> arr[i];
    }
}
 
void shiftZeorsToRight_2(int arr[], int &arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] != 0)
            cout << arr[i] << " ";
    }
 
    for (int j = 0; j < arrLength; j++)
    {
        if (arr[j] == 0)
            cout << 0 << " ";
    }
}
 
int main()
{
    int arr[1000];
    int arrLength;
    cin >> arrLength;
 
    readArray(arr, arrLength);
    shiftZeorsToRight_2(arr, arrLength);
 
    return 0;
}