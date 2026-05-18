// Sort the array

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    cin.tie(0);
    cout.sync_with_stdio(0);
 
    int n;
    cin >> n;
    vector<int> arr(n);
 
    for (int &item : arr)
    {
        cin >> item;
    }
 
    sort(arr.begin(), arr.end());
 
    for (int &item : arr)
    {
        cout << item << " ";
    }
 
    return 0;
}