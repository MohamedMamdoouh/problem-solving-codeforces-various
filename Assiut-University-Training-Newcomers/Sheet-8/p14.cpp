// Cakeminato

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int rows, cols, counter = 0;
    cin >> rows >> cols;
    int arr1[rows] = {0}, arr2[cols] = {0};
 
    for (int i = 0; i < rows; i++)
    {
        string line;
        cin >> line;
 
        for (int j = 0; j < cols; j++)
        {
            if (line[j] == 'S')
            {
                arr1[i] = 1;
                arr2[j] = 1;
            }
        }
    }
 
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr1[i] == 0 || arr2[j] == 0)
                counter++;
        }
    }
 
    cout << counter << endl;
 
    return 0;
}
