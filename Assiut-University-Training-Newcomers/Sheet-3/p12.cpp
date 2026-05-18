// Fibonacci

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
 
    long long arr[n];
    arr[0] = 0;
    arr[1] = 1;
 
    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
 
    cout << arr[n-1] << endl;
 
    return 0;
}