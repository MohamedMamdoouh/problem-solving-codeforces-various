// Announcement

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, counter = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    sort(arr, arr + n);
 
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            counter++;
    }
 
    if (counter >= 1)
        cout << counter << endl;
 
    else
        cout << -1 << endl;
 
    return 0;
}