// The first missing number

#include <bits/stdc++.h>
using namespace std;
 
bool isFound(vector<int> arr, int numberToSearch)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == numberToSearch)
            return true;
    }
    return false;
}
 
int main()
{
    cin.tie(0);
    cout.sync_with_stdio(0);
 
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    if (m > 0)
    {
        for (int i = -m; i <= m; i++)
        {
            if (isFound(arr, i) == false)
            {
                cout << i << endl;
                return 0;
            }
        }
    }
 
    else
    {
        for (int i = m; i <= -m; i++)
        {
            if (isFound(arr, i) == false)
            {
                cout << i << endl;
                return 0;
            }
        }
    }
    
    return 0;
}