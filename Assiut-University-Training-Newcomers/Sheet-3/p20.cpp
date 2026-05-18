// Mirror Array

#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int rows, columns;
    cin >> rows >> columns;
    int arr[rows][columns];
 
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> arr[i][j];
        }
    }
 
    for (int i = 0; i < rows; i++)
    {
        for (int j = columns - 1; j >= 0; j--)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
 
    return 0;
}