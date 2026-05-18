// Soltan Loves Funny Numbers

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
 
    if (n % 5 == 0 && n % 7 == 0)
        cout << "YES\n";
 
    else
        cout << "NO\n";
 
    return 0;
}