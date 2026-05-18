// Stars Drawing (Easy Edition)

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int rows, cols;
    cin >> rows >> cols;
    char arr[rows + 1][cols + 1];
    int freqArr[rows + 1][cols + 1];
    int rowArr[100010], colArr[100010], len[100100], k = 0, a = 1;
 
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cin >> arr[i][j];
        }
    }
 
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= cols; j++)
        {
            freqArr[i][j] = 0;
        }
    }
 
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (arr[i][j] == '*' && arr[i - 1][j] == '*' && arr[i][j + 1] == '*' && arr[i][j - 1] == '*' && arr[i + 1][j] == '*')
            {
                a = 1;
                rowArr[k] = i;
                colArr[k] = j;
 
                while (arr[i][j] == '*' && arr[i - a][j] == '*' && arr[i][j + a] == '*' && arr[i][j - a] == '*' && arr[i + a][j] == '*')
                {
                    len[k]++;
                    freqArr[i][j]++;
                    freqArr[i - a][j]++;
                    freqArr[i][j + a]++;
                    freqArr[i][j - a]++;
                    freqArr[i + a][j]++;
                    a++;
                }
                k++;
            }
        }
    }
 
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (arr[i][j] == '*' && freqArr[i][j] == 0)
            {
                cout << -1 << endl;
                return 0;
            }
        }
    }
 
    if (k == 0)
    {
        cout << 0 << endl;
        return 0;
    }
 
    cout << k << endl;
 
    for (int i = 0; i < k; i++)
    {
        cout << rowArr[i] << " " << colArr[i] << " " << len[i] << endl;
    }
 
    return 0;
}