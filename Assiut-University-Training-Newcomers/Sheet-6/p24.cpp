// Rectangle
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    double x1, y1, x2, y2, x3, y3, x4, y4, n, xPoint, yPoint;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> n;
 
    int minX = min(min(x1, x2), min(x3, x4));
    int minY = min(min(y1, y2), min(y3, y4));
    int maxX = max(max(x1, x2), max(x3, x4));
    int maxY = max(max(y1, y2), max(y3, y4));
 
    while (n--)
    {
        cin >> xPoint >> yPoint;
        if ((xPoint >= minX && xPoint <= maxX) && (yPoint >= minY && yPoint <= maxY))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}