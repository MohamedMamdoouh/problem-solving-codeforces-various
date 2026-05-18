// Strange Addition

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    cin.tie(0);
    cout.sync_with_stdio(0);
 
    int k;
    bool flag = 0;
    cin >> k;
    int arr[k];
    vector<int> mySet;
 
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
 
        if ((arr[i] == 0 || arr[i] == 100))
            mySet.push_back(arr[i]);
 
        else if (arr[i] > 0 && arr[i] < 10 && !flag)
        {
            mySet.push_back(arr[i]);
            flag = 1;
        }
    }
 
    if (flag)
 
        for (int i = 0; i < k; i++)
        {
            if (arr[i] >= 10 && arr[i] < 100 && arr[i] % 10 == 0)
            {
                mySet.push_back(arr[i]);
                break;
            }
        }
 
    else
    {
        for (int i = 0; i < k; i++)
        {
            if (arr[i] >= 10 && arr[i] < 100)
            {
                mySet.push_back(arr[i]);
                break;
            }
        }
    }
 
    cout << mySet.size() << endl;
 
    for (int i = 0; i < mySet.size(); i++)
    {
        cout << mySet[i] << " ";
    }
}