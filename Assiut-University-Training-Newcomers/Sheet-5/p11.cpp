// Shift Right

#include <bits/stdc++.h>
using namespace std;
 
void readArray(int arr[], int &arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cin >> arr[i];
    }
}
 
void printArray(int arr[], int &arrLength)
{
 
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
}
 
void shiftElementsInArray(int arr[], int &arrLength, int numberOfShiftingTimes)
{
    for (int i = 0; i < numberOfShiftingTimes; i++)
    {
        // Shift elements to the right
        for (int i = arrLength; i > 0; --i)
        {
            arr[i] = arr[i - 1];
        }
 
        // Insert element at the start
        arr[0] = arr[arrLength];
    }
}
 
int main()
{
 
    int arr[10000];
    int arrLength;
    int x;
 
    cin >> arrLength >> x;
 
    readArray(arr, arrLength);
    shiftElementsInArray(arr, arrLength, x);
    printArray(arr, arrLength);
 
    return 0;
}