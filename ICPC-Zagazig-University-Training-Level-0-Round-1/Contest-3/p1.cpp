// Bulbs

#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int maxBulb = 0;
    int counter = 0;
 
    for (int i = 0; i < n; i++)
    {
        int bulb;
        cin >> bulb;
 
        maxBulb = max(maxBulb, bulb);
 
        if (maxBulb == i + 1)
            counter++;
    }
 
    cout << counter << endl;
 
    return 0;
}