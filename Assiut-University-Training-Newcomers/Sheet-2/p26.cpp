// Easy Fibonacci

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int x1 = 0, x2 = 1;
    int n;
    cin >> n;
 
    if (n == 1)
        cout << 0;
    else
    {
        int x;
        cout << x1 << " " << x2 << " ";
        for (int i = 2; i < n; i++)
        {
            x = x1 + x2;
            cout << x << " ";
            x1 = x2;
            x2 = x;
        }
    }
 
    return 0;
}
