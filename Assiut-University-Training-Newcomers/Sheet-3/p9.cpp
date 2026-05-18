// Max Subarray

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
    int n;
    cin >> n;
 
    int arr[1000];
    int arrLen;
    int max = INT_MIN;
    
    while (n--)
    {
        readArray(arr, arrLen);
 
        for (int start = 0; start < arrLen; start++)
        {
            for (int end = start; end < arrLen; end++)
            {
                for (int i = start; i <= end; i++)
                {
                    if (arr[i] > max)
                        max = arr[i];
                }
                cout << max << " ";
                max = INT_MIN;
            }
            cout << endl;
        }
    }
 
    return 0;
