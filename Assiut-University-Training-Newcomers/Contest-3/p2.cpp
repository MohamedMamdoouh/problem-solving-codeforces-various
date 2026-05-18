// Reversing

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int arrLen;
    cin >> arrLen;
    int arr[arrLen];
 
    for (int i = 0; i < arrLen; i++)
    {
        cin >> arr[i];
    }
 
    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] == 0)
            reverse(arr + 0, arr + i + 1 - 1);
    }
 
    for (int i = 0; i < arrLen; i++)
    {
        cout << arr[i] << " ";
    }
 
    return 0;
}