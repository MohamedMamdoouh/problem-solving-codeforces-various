// George and Accommodation


#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int rooms, counter = 0, currentCapacity, fullCapacity;
    cin >> rooms;
 
    while (rooms--)
    {
        cin >> currentCapacity >> fullCapacity;
 
        if (fullCapacity - currentCapacity >= 2)
            counter++;
    }
 
    cout << counter << endl;
    return 0;
}