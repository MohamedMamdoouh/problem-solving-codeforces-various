// Soltan Loves Physics

#include <bits/stdc++.h>
using namespace std;

 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int a, b;
    cin >> a >> b;
    double res = (double)(a * b) / (a + b);
 
    if (res == (int)res)
        cout << fixed << setprecision(1) << res << endl;
 
    else
        cout << fixed << setprecision(15) << res << endl;
 
    return 0;
}
