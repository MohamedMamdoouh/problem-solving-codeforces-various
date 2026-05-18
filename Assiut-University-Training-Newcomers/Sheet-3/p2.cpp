// Searching

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
    int arr[100000];
    int arrLen;
 
    readArray(arr, arrLen);
 
    int x;
    cin >> x;
 
    bool flag = 0;
 
    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] == x)
        {
            cout << i << endl;
            flag = 1;
            break;
        }
    }
    if (!flag)
        cout << -1 << endl;
 
    return 0;
}