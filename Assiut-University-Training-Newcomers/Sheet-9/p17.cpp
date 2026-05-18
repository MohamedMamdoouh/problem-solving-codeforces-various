// Dreamoon and Stairs

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, m, worstCase, bestCase;
    cin >> n >> m;
 
    if (m > n)
    {
        cout << -1 << endl;
        return 0;
    }
 
    for (int i = 1; i <= n; i++)
    {
        if (i % m == 0 && 2 * i >= n)
        {
            cout << i << endl;
            return 0;
        }
    }
 
    cout << -1 << endl;
 
    return 0;
}