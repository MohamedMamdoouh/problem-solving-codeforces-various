// classic game

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int n;
    cin >> n;
    int arr[n][n];
    int counter = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                arr[i][j] = counter++;
            }
        }
 
        else
        {
            for (int k = n - 1; k >= 0; k--)
            {
                arr[i][k] = counter++;
            }            
        }
    }
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
 
    return 0;
}