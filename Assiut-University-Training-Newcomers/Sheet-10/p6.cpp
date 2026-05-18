// Marks

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int rows, cols;
    cin >> rows >> cols;
 
    char arr[rows][cols];
    int counter = 0;
 
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
            arr[i][j] -= '0';
        }
    }
 
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            bool isMax = true;
 
            for (int k = 0; k < rows; k++)
            {
                if (arr[i][j] < arr[k][j])
                {
                    isMax = false;
                    break;
                }
            }
 
            if(isMax)
            {
                counter++;
                break;
            }
        }
    }
 
    cout << counter << endl;
 
    /*
        {9, 1, 7, 2, 8},
        {1, 1, 8, 2, 8},
        {1, 1, 1, 1, 1}
    */
 
    return 0;
}