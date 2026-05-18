// Swapping With Matrix

#include <bits/stdc++.h>
using namespace std;
 
void read2DArray(int arr[500][500], int &arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        for (int j = 0; j < arrLength; j++)
        {
            cin >> arr[i][j];
        }
    }
}
 
void print2DArray(int arr[500][500], int &arrLength)
{
 
    for (int i = 0; i < arrLength; i++)
    {
        for (int j = 0; j < arrLength; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
/*
4 3 1
1 2 3 -5 >>
-5 4 0 3
7 7 1 2 >>
40 6 5 11
*/
void swapArray(int arr[500][500], int &arrLength, int &x, int &y)
{
    // swap ROW
    for (int j = 0; j < arrLength; j++)
    {
        swap(arr[x][j], arr[y][j]);
    }
 
    // swap COLUMN
    for (int i = 0; i < arrLength; i++)
    {
        swap(arr[i][x], arr[i][y]);
    }
}
 
int main()
{
 
    int arr[500][500];
    int n, x, y;
 
    cin >> n >> x >> y;
    x--;
    y--;
 
    read2DArray(arr, n);
    swapArray(arr, n, x, y);
    print2DArray(arr, n);
 
    return 0;
}