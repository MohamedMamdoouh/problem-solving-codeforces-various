// Even & Odd

#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
 
    int n;
    cin >> n;
    int arr[n], arrEven[n], arrOdd[n], arrResult[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    int k = 0, j = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            arrEven[k++] = arr[i];
 
        else
            arrOdd[j++] = arr[i];
    }
 
    sort(arrEven, arrEven + n / 2);
    sort(arrOdd, arrOdd + n / 2);
 
    k = 0, j = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            arrResult[i] = arrEven[k++];
 
        else
            arrResult[i] = arrOdd[j++];
    }
 
    for (int i = 0; i < n; i++)
    {
        cout << arrResult[i] << " ";
    }
 
    return 0;
}