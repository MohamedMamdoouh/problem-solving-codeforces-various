// The maximum path-sum

#include <bits/stdc++.h>
using namespace std;
 
int arr[22][22];
int n, m;
 
int solve(int start, int end)
{
    if (start == n - 1 && end == m - 1)
        return arr[start][end];
 
    else if (start == n + 1 || end == m + 1)
        return INT_MIN;
 
    int right = solve(start, end + 1);
    int down = solve(start + 1, end);
 
    return arr[start][end] + max(right, down);
}
 
int main()
{
    cin >> n >> m;
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
 
    cout << solve(0, 0);
    return 0;
}