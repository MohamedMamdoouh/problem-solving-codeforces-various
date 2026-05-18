// Calculating Function

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    long long n;
    cin >> n;
 
    if (n % 2 == 0)
        cout << n / 2 << endl;
 
    else
        cout << -(n + 1) / 2 << endl;
 
    return 0;
}