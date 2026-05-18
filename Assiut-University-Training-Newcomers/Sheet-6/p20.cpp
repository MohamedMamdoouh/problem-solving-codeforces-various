// Circle Task

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int x, y, r, n, x1, y1;
    cin >> x >> y >> r >> n;
 
    while (n--)
    {
        cin >> x1 >> y1;
        double d = sqrt(pow(x - x1, 2) + pow(y - y1, 2));
 
        if (d > r)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}