// Max and MIN

#include <bits/stdc++.h>
using namespace std;
 
int minNumberOfArray(int arr[], int &arrLength)
{
 
    int min = arr[0];
 
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
 
    return min;
}
 
int maxNumberOfArray(int arr[], int &arrLength)
{
 
    int max = arr[0];
 
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
 
    return max;
}
 
void readArray(int arr[], int &arrLength)
{
 
    // cout << "enter array length \n";
    cin >> arrLength;
 
    for (int i = 0; i < arrLength; i++)
    {
        // cout << "enter element [" << i + 1 << "]";
        cin >> arr[i];
    }
    //cout << endl;
}
 
int main()
{
 
    int arrLength;
    int arr[1000];
 
    readArray(arr, arrLength);
    cout << minNumberOfArray(arr, arrLength) << " " ;
    cout << maxNumberOfArray(arr, arrLength);
 
    return 0;
}