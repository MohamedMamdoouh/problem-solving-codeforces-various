// GCD

#include <bits/stdc++.h>
using namespace std;
 
int GCDBetweenTwoNumbers(int num1, int num2)
{
    int minNum = min(num1, num2);
    int gcd = 0;
 
    for (int i = 1; i < minNum; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
 
int main()
{
    int a, b;
    cin >> a >> b;
 
    cout << gcd(a,b) << endl;
    return 0;
}