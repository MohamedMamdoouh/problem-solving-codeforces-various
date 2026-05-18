//  Positions in array

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
        if(arr[i] <= 10)
        cout << "A[" << i << "] = " << arr[i] << endl;
    }
    
 
    return 0;
}
