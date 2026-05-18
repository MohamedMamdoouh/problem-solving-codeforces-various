// Soltan Reconstructs The Array

#include <bits/stdc++.h>
using namespace std;
 
void construct(int n, int m, int a[])
{
    int ind = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (a[i] != -1)
        {
            ind = i;
            break;
        }
    }
 
    for (int i = ind - 1; i > -1; i--)
    {
        if (a[i] == -1)
            a[i] = (a[i + 1] - 1 + m) % m;
    }
 
    for (int i = ind + 1; i < n; i++)
    {
        if (a[i] == -1)
            a[i] = (a[i - 1] + 1) % m;
    }
 
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
 
int main()
{
 
    int t;
    cin >> t;
 
    while (t--)
    {
        int arrLen, m;
        cin >> arrLen >> m;
        int arr[arrLen];
 
        for (int i = 0; i < arrLen; i++)
        {
            cin >> arr[i];
        }
 
        construct(arrLen, m, arr);
 
        cout << endl;
    }
    return 0;
}