// Presents

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
    int arr[n], res[n];
 
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        res[arr[i]] = i;
    }
 
    for (int i = 1; i <= n; i++)
    {
        cout << res[i] << " ";
    }
    
    
    return 0;
}