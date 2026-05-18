// Matrix 

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
    int arr[n][n];
    int sumMain = 0, sumSec = 0, sum=0;
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
 
    for (int i = 0; i < n; i++)
    {
        sumMain += arr[i][i];
    }
 
    for (int i = 0; i < n; i++)
    {
        sumSec += arr[i][n - i - 1];
    }
 
    sum = abs(sumMain - sumSec);
    cout << sum << endl;
    return 0;
}