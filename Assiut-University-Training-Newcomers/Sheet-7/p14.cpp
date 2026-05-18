// Sum of a Matrix

#include <bits/stdc++.h>
using namespace std;
 
long long matrixA[100][100], matrixB[100][100], res[100][100];
int r, c;
 
void sum(int i, int j)
{
    if (r == i || c == j)
        return;
 
    res[i][j] = matrixA[i][j] + matrixB[i][j];
 
    // Recursive call to process next element in row-major order
    if (j + 1 < c)
        sum(i, j + 1); // Move to next column in the same row
 
    else if (i + 1 < r)
        sum(i + 1, 0); // Move to next row, start from column 0
}
 
int main()
{
 
    cin >> r >> c;
 
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matrixA[i][j];
        }
    }
 
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matrixB[i][j];
        }
    }
 
    sum(0, 0);
 
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
 
    return 0;
}
