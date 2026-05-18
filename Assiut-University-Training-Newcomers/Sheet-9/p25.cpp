// Polo the Penguin and Segments

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, k, covered = 0;
    cin >> n >> k;
 
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        covered += (y - x + 1);
    }
 
    covered %= k; 
    if (covered == 0)
        cout << 0 << endl;
 
    else
        cout << k - covered << endl;
 
    return 0;
}