// Permutation with arrays

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
    int arrLen;
    cin >> arrLen;
    int arr[arrLen];
    int arr2[arrLen];
 
    for (int i = 0; i < arrLen; i++)
    {
        cin >> arr[i];
    }
 
    for (int i = 0; i < arrLen; i++)
    {
        cin >> arr2[i];
    }
 
    sort(arr, arr + arrLen);
    sort(arr2, arr2 + arrLen);
 
    for (int i = 0; i < arrLen; i++)
    {
        if(arr[i] != arr2[i])
        {
            cout << "no\n";
            return 0;
        }
    }
    cout << "yes\n";
    
 
    return 0;
}