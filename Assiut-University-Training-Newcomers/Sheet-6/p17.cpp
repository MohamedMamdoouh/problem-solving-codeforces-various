// Product

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int l, r, m;
    long long sum = 1;
    cin >> l >> r >> m;
 
    for (int i = l; i <= r; i++)
    {
        sum *= i;
        sum %= m;
    }
 
    cout << sum << endl;
 
}