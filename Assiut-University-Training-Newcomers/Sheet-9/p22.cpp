// Balanced Rating Changes

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    short mult = 1;
    int n;
    cin >> n;
    int arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            cout << arr[i] / 2 << endl;
 
        else
        {
            cout << (arr[i] + mult) / 2 << endl;
            mult = mult * -1;
        }
    }
 
    return 0;
}