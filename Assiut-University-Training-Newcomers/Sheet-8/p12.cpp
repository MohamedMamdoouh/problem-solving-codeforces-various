// Sereja and Dima

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
    int arr[n];
    int sejSum = 0, dimaSum = 0, start = 0, end = n, turn = 0, max = 0;
    bool flag = 1;
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    while (n--)
    {
        // 4 1 2 10
        if (arr[start] >= arr[end - 1])
        {
            max = arr[start];
            start++;
        }
 
        else
        {
            max = arr[end - 1];
            end--;
        }
 
        if (flag)
        {
            sejSum += max;
            flag = !flag;
        }
 
        else
        {
            dimaSum += max;
            flag = !flag;
        }
    }
 
    cout << sejSum << " " << dimaSum << endl;
 
    return 0;
}