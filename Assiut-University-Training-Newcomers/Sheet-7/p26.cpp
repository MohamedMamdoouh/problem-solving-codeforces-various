// Left Max


#include <bits/stdc++.h>
using namespace std;
 
int n, mx = INT_MIN;
int arr[100005];
 
void solve(int index)
{
    if (index == n + 1)
        return;
 
    mx = max(mx, arr[index]);
    cout << mx << " ";
 
    solve(index + 1);
}
 
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    
    solve(1);
 
    return 0;
}