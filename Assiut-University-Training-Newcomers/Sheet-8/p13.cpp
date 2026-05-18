// The New Year: Meeting Friends

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
 
    sort(arr, arr + 3);
    int median = arr[1];
 
    cout << abs(arr[0] - median) + abs(arr[1] - median) + abs(arr[2] - median) << endl;
 
    return 0;
}