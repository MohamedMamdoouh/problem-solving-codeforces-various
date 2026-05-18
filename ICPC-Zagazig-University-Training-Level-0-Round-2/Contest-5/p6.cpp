// Soltan Negates The Array

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, k, sum = 0;
        cin >> n >> k;
        int arr[n];
 
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
 
        sort(arr, arr + n);
 
        for (int j = 0; j < n; j++)
        {
            if(arr[j] < 0 && k > 0)
            {
                arr[j] = arr[j] * -1;
                k--;
            }
        }
 
        sort(arr, arr + n);
        
        while (k--)
        {
            arr[0] = arr[0] * -1;
        }
        
 
        for (int y = 0; y < n; y++)
        {
            sum += arr[y];
        }
 
        cout << sum << endl;
    }
 
    return 0;
}