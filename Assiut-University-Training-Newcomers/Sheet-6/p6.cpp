// Multiplication of Matrices

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int r1, c1, r2, c2;
    cin >> r1 >> c1;
    int arr1[r1][c1];
 
    for (int i = 0; i < r1; i++)
    {
        for (int k = 0; k < c1; k++)
        {
            cin >> arr1[i][k];
        }
    }
 
    cin >> r2 >> c2;
    int arr2[r2][c2];
 
    for (int m = 0; m < r2; m++)
    {
        for (int n = 0; n < c2; n++)
        {
            cin >> arr2[m][n];
        }
    }
 
    int result[r1][c2];
 
     for (int g = 0; g < r1; g++)
    {
        for (int h = 0; h < c2; h++)
        {
            result[g][h] = 0;
        }
    }
 
    for (int p = 0; p < r1; p++)
    {
        for (int q = 0; q < c2; q++)
        {
            for (int y = 0; y < c1; y++)
            {
                result[p][q] += arr1[p][y] * arr2[y][q];
            }
        }
    }
 
    for (int w = 0; w < r1; w++)
    {
        for (int e = 0; e < c2; e++)
        {
            cout << result[w][e] << " ";
        }
        cout << endl;
    }
 
    return 0;
}