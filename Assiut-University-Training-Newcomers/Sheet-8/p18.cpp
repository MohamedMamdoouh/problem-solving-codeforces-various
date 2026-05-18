// Arrival of the General

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    /*
        the answer is:
        number of leftmost soldier with the maximum height - 1 + n - number of rightmost soldier with the minimum height.
        And if the leftmost soldier with the maximum height is more right
        then the rightmost soldier with the minimum height we should subtract one from the answer.
    */
 
    int n, res = 0, maxIndex = 0, minIndex = 0;
    cin >> n;
    int arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    int max = arr[0], min = arr[0];
 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
 
        if (arr[i] <= min)
        {
            min = arr[i];
            minIndex = i;
        }
    }
 
    res = abs(maxIndex - 0) + abs(minIndex - (n - 1));
 
    if (maxIndex > minIndex)
        res--;
 
    cout << res << endl;
 
    return 0;
}