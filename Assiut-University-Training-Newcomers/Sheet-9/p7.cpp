// Twins

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, sum = 0, res = 0;
    cin >> n;
    int arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
 
    sort(arr, arr + n);
    reverse(arr, arr + n);
 
    for (int i = 0; i < n; i++)
    {
        res += arr[i];
        if (res > sum - res)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
 
    return 0;
}