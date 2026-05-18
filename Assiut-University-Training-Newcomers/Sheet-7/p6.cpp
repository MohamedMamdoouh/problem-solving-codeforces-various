// Print Even Indices

#include <bits/stdc++.h>
using namespace std;
 
 
void recu(int arr[], int arrLen)
{
    if (arrLen < 0)
        return;
 
    if ((arrLen - 1) % 2 == 0 && arrLen - 1 >= 0)
        cout << arr[arrLen - 1] << " ";
 
    recu(arr, arrLen - 1);
}
 
int main()
{
 
    int n;
    cin >> n;
    int arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    recu(arr, n);
 
    return 0;
}