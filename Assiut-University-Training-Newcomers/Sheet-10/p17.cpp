// Bulbs

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int n, counter = 0, maxNumber = 0;
    cin >> n;
    int arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
 
        maxNumber = max(maxNumber, arr[i]);
 
        if (maxNumber == i + 1)
            counter++;
    }
 
    cout << counter << endl;
    
    return 0;
}