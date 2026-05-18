//  Binary Search

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int n, q, x;
    cin >> n >> q;
    int arr[n];
    bool found;
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr, arr + n);
 
    while (q--)
    {
        cin >> x;
        found = binary_search(arr, arr + n, x);
 
        if (found)
            cout << "found\n";
        else
            cout << "not found\n";
    }
 
    return 0;
}