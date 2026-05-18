// Counting Elements

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int n, counter = 0;
    cin >> n;
    int arr[n], freq[10000] = {0};
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
 
    for (int i = 0; i < n; i++)
    {
        int x = arr[i] + 1;
        if (freq[x] > 0)
            counter++;
    }
 
    cout << counter << endl;
    return 0;
}