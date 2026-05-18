// Cut Ribbon

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // 5 5 3 2
    int n, a, b, c, x, y, z, result = 0;
    cin >> n >> a >> b >> c;
 
    for (x = 0; x <= n; x++)
    {
        for (y = 0; y <= n; y++)
        {
            z = (n - a * x - b * y) / c;
            
            if (z < 0)
                z = 0;
 
            if (n == x * a + y * b + z * c)
            {
                result = max(result, x + y + z);
            }
        }
    }
 
    cout << result << endl;
}