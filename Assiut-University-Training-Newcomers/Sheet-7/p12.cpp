// Summation

#include <bits/stdc++.h>
using namespace std;
 
long long sum(int arr[], int arrLen, int i, long long res)
{
    if (arrLen == i)
        return res;
 
    res += arr[i];
    sum(arr, arrLen, ++i, res);
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
 
    cout << sum(arr, n, 0, 0) << endl;
 
    return 0;
}