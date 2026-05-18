//  Soltan Loves Incrementing

#include <bits/stdc++.h>
using namespace std;
 
bool isEven(int arr[], int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] % 2 != 0)
            return 0;
    }
    return 1;
}
 
bool isOdd(int arr[], int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] % 2 == 0)
            return 0;
    }
    return 1;
}
 
void addOneEven(int arr[], int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        if (i % 2 == 0)
            ++arr[i];
    }
}
 
void addOneOdd(int arr[], int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        if (i % 2 != 0)
            ++arr[i];
    }
}
 
bool solve(int arr[], int arrLen)
{
    if (isEven(arr, arrLen) || isOdd(arr, arrLen))
    {
        return 1;
    }
 
    while (1)
    {
        addOneEven(arr, arrLen);
        if (isEven(arr, arrLen) || isOdd(arr, arrLen))
            return 1;
 
        addOneOdd(arr, arrLen);
        if (isEven(arr, arrLen) || isOdd(arr, arrLen))
            return 1;
 
        return 0;
    }
}
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int testCases;
    cin >> testCases;
 
    while (testCases--)
    {
        int arrLen;
        cin >> arrLen;
        int arr[arrLen];
 
        for (int i = 0; i < arrLen; i++)
        {
            cin >> arr[i];
        }
 
        if (solve(arr, arrLen))
            cout << "YES\n";
 
        else
            cout << "NO\n";
    }
 
    return 0;
}