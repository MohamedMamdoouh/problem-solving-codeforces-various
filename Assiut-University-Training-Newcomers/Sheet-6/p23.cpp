// Circles

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
 
    double midAX = (x1 + x2) / 2;
    double midAY = (y1 + y2) / 2;
    double midBX = (x3 + x4) / 2;
    double midBY = (y3 + y4) / 2;
 
    double d = sqrt(pow(midAX - midBX, 2) + pow(midAY - midBY, 2));
    double lenA = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double lenB = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
    double sum = lenA/2 + lenB/2;
 
    if (d <= sum)
        cout << "YES\n";
    else
        cout << "NO\n";
}