// Soltan's Array

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int testCases, arrLen;
    cin >> testCases;
 
    while (testCases--)
    {
        cin >> arrLen;
        int arr[arrLen], counter = 1;
        bool flag = 0;
 
        // 1 4 3 4 3 2 4 1
        // 1 1 2 3 3 4 4 4
        // result: 3
 
        for (int i = 0; i < arrLen; i++)
        {
            cin >> arr[i];
        }
 
        sort(arr, arr + arrLen);
 
        for (int j = 0; j < arrLen - 1; j++)
        {
            if (arr[j] == arr[j + 1])
            {
                counter++;
                if (counter == 3)
                {
                    cout << arr[j] << endl;
                    flag = 1;
                    break;
                }
            }
 
            else if (arr[j] != arr[j + 1])
                counter = 1;
        }
 
        if (flag == 0)
            cout << -1 << endl;
    }
 
    return 0;
}