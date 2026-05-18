// Alternating Array

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int n, counter1 = 0, counter2 = 0, mult = -1, x = 0, y = 0;
    cin >> n;
    int arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    for (int i = 0; i < n; i++)
    {
        x = abs(arr[i]) * mult;
        y = abs(arr[i]) * mult * -1;
        mult *= -1;
 
        if (x != arr[i])
            counter1++;
 
        else if (y != arr[i])
            counter2++;
    }
 
    cout << min(counter1, counter2) << endl;
 
    return 0;
}