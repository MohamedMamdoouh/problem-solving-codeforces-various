// Equation

#include <bits/stdc++.h>
using namespace std;
 
//  S = (X0 - 1) + (X2) + (X4) + (X6) + ............... + (XN)
 
long long getNumbertoPower(int number, int power)
{
 
    long long result = 1;
 
    if (power == 0)
        return 1;
 
    for (int i = 0; i < power; i++)
        result *= number;
 
    return result;
}
 
long long result(int x, int n)
{
    long long sum = 0;
 
    if (n == 0)
        return 0;
 
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
            sum += (getNumbertoPower(x, i));
    }
 
    return sum;
}
 
int main()
{
    int x, n;
    cin >> x >> n;
 
    cout << result(x, n) << endl;
 
    return 0;
}