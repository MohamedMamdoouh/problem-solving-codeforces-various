// Common Area

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int testCases, N;
    long long x1, y1, x2, y2;
 
    cin >> testCases;
    int counter = 1;
 
    while (counter <= testCases)
    {
        cin >> N;
        cin >> x1 >> y1 >> x2 >> y2;
 
        long long maxXLower = x1, maxYLower = y1, minXUpper = x2, minYUpper = y2;
 
        for (int i = 1; i < N; i++)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            maxXLower = max(maxXLower, x1);
            maxYLower = max(maxYLower, y1);
            minXUpper = min(minXUpper, x2);
            minYUpper = min(minYUpper, y2);
        }
 
        if (minXUpper > maxXLower && minYUpper > maxYLower)
            cout << "Case #" << counter << ": " << (minXUpper - maxXLower) * (minYUpper - maxYLower) << endl;
        else
            cout << "Case #" << counter << ": " << 0 << endl;
 
        counter++;
    }
}