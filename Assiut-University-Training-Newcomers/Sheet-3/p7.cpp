// Lucky Array

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
 
    int min = INT_MAX;
    int counter = 0;
 
    readArray(arr, arrLen);
 
    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
 
    for (int k = 0; k < arrLen; k++)
    {
        if(arr[k] == min)
        counter++;
    }
    
    if (counter % 2 != 0)
    cout << "Lucky\n";
    else
    cout << "Unlucky\n";
    return 0;
}