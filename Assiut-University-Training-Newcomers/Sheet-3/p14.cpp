// Count Subarrays

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
    int n;
    cin >> n;
    int counter = 0;
 
    while (n--)
    {
        readArray(arr, arrLen);
 
        for (int i = 0; i < arrLen; i++)
        {
            for (int j = i + 1; j < arrLen; j++)
            {
                if (arr[j] >= arr[j - 1])
                    counter++;
                else
                    break;
            }
        }
        cout << counter + arrLen << endl;
        counter = 0;
    }
 
    return 0;
}