// Summation

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
 
    long long sum  = 0;
 
    for (int i = 0; i < arrLen; i++)
    {
        sum += arr[i];
    }
 
    cout << abs(sum) << endl;
    
 
    return 0;
}