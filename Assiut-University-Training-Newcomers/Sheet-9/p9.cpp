// Lineland Mail

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
    int arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    for (int i = 0; i <= n - 1; i++)
    {
        if (i == 0)
            cout << abs(arr[0] - arr[1]) << " " << abs(arr[0] - arr[n - 1]) << endl;
 
        else if (i == n - 1)
            cout << abs(arr[n - 1] - arr[n - 2]) << " " << abs(arr[n - 1] - arr[0]) << endl;
 
        else
        {
            int maxValue = max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n - 1]));
            int minVlaue = min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1]));
            cout << minVlaue << " " << maxValue << endl;
        }
    }
 
    return 0;
}