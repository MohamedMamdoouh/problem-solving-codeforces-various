// Soltan The Problemsetter

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int testCases;
    cin >> testCases;
 
    while (testCases--)
    {
      int n;
      cin >> n;
      int arr[n];
 
      for (int i = 0; i < n; i++)
      {
        cin >> arr[i];
      }
 
      sort(arr, arr + n);
      cout << arr[0] << endl;
      
    }
 
    return 0;
}