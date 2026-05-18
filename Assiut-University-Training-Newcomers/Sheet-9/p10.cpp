// Shaass and Oskols

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, shots, wireNum, birdNum;
    cin >> n;
    int arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    cin >> shots;
 
    for (int i = 0; i < shots; i++)
    {
       cin >> wireNum >> birdNum;
       arr[wireNum - 2] += birdNum - 1;
       arr[wireNum - 1 + 1] += arr[wireNum - 1] - birdNum;
       arr[wireNum - 1] = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    
    
 
    return 0;
}