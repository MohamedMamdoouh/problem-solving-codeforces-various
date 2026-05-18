// Pyramid

#include <bits/stdc++.h>
using namespace std;
 
void pyramid(int row, int n)
{
    if (row == 0)
        return;
 
    pyramid(row - 1, n);
 
    for (int i = 1; i <= n - row; i++)
    {
        cout << " ";
    }
 
    for (int j = 1; j <= 2 * row - 1; j++)
    {
        cout << "*";
    }
 
    cout << endl;
}
 
int main()
{
 
    int n;
    cin >> n;
    pyramid(n, n);
 
    return 0;
}