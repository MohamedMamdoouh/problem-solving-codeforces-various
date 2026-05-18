// Pumbaa And Apples

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, m, k, x, y;
    char choice;
 
    cin >> n >> m >> k;
 
    int arr[n + 1][m + 1];
    int arrR[n + 1], arrC[m + 1];
 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
 
    for (int i = 1; i <= n; i++)
    {
        arrR[i] = i;
    }
 
    for (int i = 1; i <= m; i++)
    {
        arrC[i] = i;
    }
 
    while (k--)
    {
        cin >> choice >> x >> y;
 
        if (choice == 'c')
            swap(arrC[x], arrC[y]);
 
        else if (choice == 'r')
            swap(arrR[x], arrR[y]);
 
        else
            cout << arr[arrR[x]][arrC[y]] << "\n";
    }
 
    return 0;
}