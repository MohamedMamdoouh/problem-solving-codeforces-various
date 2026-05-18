// Straight Line


#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int x1, y1, x2, y2, x3, y3, m1, m2, m3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
 
    // m1 = (y2 - y1) / (x2 - x1);
    // m2 = (y3 - y2) / (x3 - x2);
    // m3 = (y3 - y1) / (x3 - x1);
 
    int result1 = (y3 - y2) * (x2 - x1);
    int result2 = (y2 - y1) * (x3 - x2);
 
    if (result1 == result2)
        cout << "YES\n";
    else
        cout << "NO\n";
}