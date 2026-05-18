// Construct the Sum

#include <bits/stdc++.h>
using namespace std;
 
int main()
 
{
    long long sum = 0;
    long long testCases, n1, n2;
    cin >> testCases;
 
    while (testCases--)
    {
        cin >> n1 >> n2;
 
        if (n1 * (n1 + 1) / 2 < n2)
            cout << -1;
 
        else
        {
            for (int i = n1; i >= 1; i--)
            {
                if (sum + i <= n2)
                {
                    cout << i << " ";
                    sum += i;
                }
 
                if (sum == n2)
                    break;
            }
        }
        cout << endl;
        sum = 0;
    }
 
    return 0;
}