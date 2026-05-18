//  Soltan and Traffic Lights

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int x, g, y, r;
        cin >> x >> g >> y >> r;
        int totalDuration = g + y + r;
 
        if (x % totalDuration < g)
            cout << "GREEN\n";
 
        else if (x % totalDuration < g + y)
            cout << "YELLOW\n";
 
        else
            cout << "RED\n";
    }
 
    return 0;
}