// Search In Matrix

#include <bits/stdc++.h>
using namespace std;
 
void readArray(int arr[], int &arrLength)
{
 
    cin >> arrLength;
 
    for (int i = 0; i < arrLength; i++)
    {
        cin >> arr[i];
    }
}
 
int main()
{
    int m, n, x;
    cin >> n >> m;
    int arr[n][m];
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> x;
 
    for (int l = 0; l < n; l++)
    {
        for (int p = 0; p < m; p++)
        {
           if (arr[l][p] == x)
           {
            cout << "will not take number\n";
            return 0;
           }
        }
    }
    cout << "will take number\n";
 
    return 0;
}