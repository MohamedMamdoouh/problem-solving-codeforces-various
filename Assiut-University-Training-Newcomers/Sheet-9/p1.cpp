// Drawing Task

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int m, n, q;
    int r1, c1, r2, c2;
    cin >> n >> m >> q;
    char c, arr[n][m];
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = '.';
        }
    }
 
    for (int i = 0; i < q; i++)
    {
        cin >> r1 >> c1 >> r2 >> c2 >> c;
 
        for (int j = min(r1, r2) - 1; j <= max(r1, r2) - 1; j++)
        {
            for (int k = min(c1, c2) - 1; k <= max(c1, c2) - 1; k++)
            {
                arr[j][k] = c;
            }
        }
    }
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
 
    return 0;
}