// Mahmoud and a Triangle

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    long long n;
    cin >> n;
    long long arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    sort(arr, arr + n);
 
    for (int i = 0; i < n - 2; i++)
    {
        if (arr[i] + arr[i + 1] > arr[i + 2])
        {
            cout << "YES\n";
            return 0;
        }
    }
 
    cout << "NO\n";
 
    /*
    a + b > c
    a + c > b
    b + c > a
    */
 
    return 0;
}