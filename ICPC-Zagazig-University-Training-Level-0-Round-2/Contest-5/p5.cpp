// Soltan and The Special King

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
 
    while (t--)
    {
       int x1,y1,x2,y2;
       cin >> x1 >> y1 >> x2 >> y2;
 
       cout << abs(x1-x2) + abs(y1-y2) << endl;
    }
 
    return 0;
}