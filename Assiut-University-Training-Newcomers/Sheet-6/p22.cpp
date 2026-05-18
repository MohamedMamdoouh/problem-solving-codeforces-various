// Two Lines

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
 
    int result1 = x2 - x1;
    int result2 = y2 - y1;
    int result3 = x4-x3;
    int result4 = y4-y3;
 
    if (result1 * result4 == result2 * result3)
        cout << "YES\n";
    else
        cout << "NO\n";
}