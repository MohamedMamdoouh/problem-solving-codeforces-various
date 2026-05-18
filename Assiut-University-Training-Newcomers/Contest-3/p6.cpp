// Front - End,

#include <bits/stdc++.h>
using namespace std;
 
void removeElement(int arr[], int &arrLen, int indexToRemove)
{
    for (int i = indexToRemove; i < arrLen - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
 
    arrLen--;
}
 
int main()
{
 
    int n;
    cin >> n;
    int arr[n];
    int key = n;
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    while (key > 0)
    {
        cout << arr[0] << " ";
        removeElement(arr, n, 0);
        key--;
 
        if (key > 0)
        {
            cout << arr[n - 1] << " ";
            removeElement(arr, n, n - 1);
            key--;
        }
    }
 
    return 0;
}