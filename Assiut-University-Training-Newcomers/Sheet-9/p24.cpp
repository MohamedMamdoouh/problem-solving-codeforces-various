// Mountain Scenery

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, k;
    cin >> n >> k;
    int arr[n * 2 + 1];
 
    for (int i = 0; i < n * 2 + 1; i++)
    {
        cin >> arr[i];
    }
 
    for (int i = 1; i < n * 2 + 1; i++)
    {
        if (arr[i] > arr[i - 1] + 1 && arr[i] > arr[i + 1] + 1)
        {
            arr[i]--;
            k--;
            if (k == 0)
                break;
        }
    }
 
    for (int i = 0; i < n * 2 + 1; i++)
    {
        cout << arr[i] << " ";
    }
 
    return 0;
}