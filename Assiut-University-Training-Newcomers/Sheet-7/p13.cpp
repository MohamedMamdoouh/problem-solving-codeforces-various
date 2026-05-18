// Suffix Sum

#include <bits/stdc++.h>
using namespace std;
 
long long sum(int arr[], int arrLen, int i, long long res, int m)
{
 
    if (m - i == 0)
        return res;
 
    res += arr[arrLen - 1 - i];
    sum(arr, arrLen, ++i, res, m);
}
 
int main()
{
 
    int n, m;
    cin >> n >> m;
    int arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << sum(arr, n, 0, 0, m) << endl;
 
    return 0;
}