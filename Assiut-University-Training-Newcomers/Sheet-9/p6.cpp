// Puzzles

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, m, res = INT_MAX;
    cin >> n >> m;
    int arr[m];
 
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
 
    sort(arr, arr + m);
 
    for (int i = 0; i <= m - n; i++)
    {
        res = min(res, arr[i + n - 1] - arr[i]);
    }
 
    cout << res << endl;
 
    return 0;
}