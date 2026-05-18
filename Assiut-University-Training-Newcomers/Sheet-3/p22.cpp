//  Range sum query

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, q;
    cin >> n >> q;
    long long arr[n];
    int L, R;
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    for (int i = 1; i < n; i++)
    {
        arr[i] += arr[i - 1];
    }
 
    while (q--)
    {
        cin >> L >> R;
        if (L == 1)
            cout << arr[R - 1] << endl;
        else
            cout << (arr[R - 1] - arr[L - 2]) << endl;
    }
 
    return 0;
}