// Replacement

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
 
    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] > 0)
            arr[i] = 1;
        else if (arr[i] < 0)
            arr[i] = 2;
    }
 
    for (int i = 0; i < arrLen; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
 
    return 0;
}
