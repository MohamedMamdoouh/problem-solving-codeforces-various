//  8 Neighbors

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int rows, columns;
    cin >> rows >> columns;
    char arr[rows][columns];
 
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> arr[i][j];
        }
    }
 
    int x, y;
    cin >> x >> y;
    x--;
    y--;
 
    if (arr[x - 1][y - 1] != '.' && arr[x - 1][y] != '.' && arr[x - 1][y + 1] != '.' && arr[x][y - 1] != '.' && arr[x][y + 1] != '.' && arr[x + 1][y - 1] != '.' && arr[x + 1][y] != '.' && arr[x + 1][y + 1] != '.')
    {
        cout << "yes\n";
    }
    else
        cout << "no\n";
 
    return 0;
}