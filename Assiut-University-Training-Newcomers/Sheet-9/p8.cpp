// Launch of Collider

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, res = INT_MAX;
    bool flag = 0;
    string st;
 
    cin >> n >> st;
    int arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    for (int i = 0; i < n - 1; i++)
    {
        if (st[i] == 'R' && st[i + 1] == 'L')
        {
            res = min((arr[i + 1] - arr[i]) / 2, res);
            flag = 1;
        }
    }
 
    if (flag)
        cout << res << endl;
 
    else
        cout << -1 << endl;
 
    return 0;
}