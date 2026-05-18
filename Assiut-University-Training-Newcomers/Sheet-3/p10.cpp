// Replace MinMax

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
 
int main()
{
 
    int arr[1000];
    int arrLen;
    readArray(arr, arrLen);
 
    int max = INT_MIN;
    int min = INT_MAX;
    int minIndex, maxIndex;
 
    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
 
        if (arr[i] < min)
        {
            min = arr[i];
            minIndex = i;
        }
    }
 
    swap(arr[maxIndex], arr[minIndex]);
 
    for (int i = 0; i < arrLen; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}