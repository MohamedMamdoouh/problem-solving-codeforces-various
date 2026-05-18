// Max Number

#include <bits/stdc++.h>
using namespace std;
 
int mx = INT_MIN;
int maxElem(int arr[], int arrLen, int i)
{
    if (i == arrLen)
        return mx;
 
    mx = max(mx, arr[i]);
    maxElem(arr, arrLen, ++i);
}
 
int main()
{
 
    int n;
    cin >> n;
    int arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    cout << maxElem(arr, n, 0);
 
    return 0;
}
