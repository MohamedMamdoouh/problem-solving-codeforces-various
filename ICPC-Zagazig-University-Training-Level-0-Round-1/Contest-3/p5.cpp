// Array

#include <iostream>
#include <algorithm>
using namespace std;
 
int lessThan(int arr[], int &arrLen, int &number)
{
    for (int i = 0; i < arrLen; i++)
    {
        if (number < arr[i])
            return (arrLen - i);
    }
    return 0;
}
 
int main()
{
    int n, q, num;
    cin >> n >> q;
 
    int arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    sort(arr, arr + n);
 
    while (q--)
    {
        cin >> num;
        cout << lessThan(arr, n, num) << endl;
    }
 
    return 0;
}
 