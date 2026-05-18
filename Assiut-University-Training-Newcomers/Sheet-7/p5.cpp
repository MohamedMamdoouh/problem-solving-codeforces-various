// Base Converssion

#include <bits/stdc++.h>
using namespace std;
 
void toDec(int n)
{
    if (n == 0)
        return;
 
    toDec(n / 2);
    cout << n % 2;
}
 
int main()
{
 
    int t, n;
    cin >> t;
    while (t--)
    {
 
        cin >> n;
        toDec(n);
        cout << endl;
    }
 
    return 0;
}