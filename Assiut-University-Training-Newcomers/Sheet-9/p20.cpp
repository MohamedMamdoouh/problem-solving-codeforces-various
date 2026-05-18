// Olesya and Rodion

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    long long n;
    int t;
    cin >> n >> t;
 
    if (n < 2 && t == 10)
    {
        cout << "-1" << endl;
        return 0;
    }
 
    if (t < 10)
    {
        for (int i = 0; i < n; i++)
        {
            cout << t;
        }
    }
 
    else if (t == 10)
    {
        for (int i = 0; i < n - 1; i++)
        {
            cout << "1";
        }
        cout << 0;
    }
 
    return 0;
}