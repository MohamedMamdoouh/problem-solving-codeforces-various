// Digits

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    string arr[10];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    for (int i = 0; i < n; i++)
    {
        for (int k = arr[i].length() - 1; k >= 0; k--)
        {
            cout << arr[i][k] << " ";
        }
        cout << endl;
    }
 
    return 0;
}