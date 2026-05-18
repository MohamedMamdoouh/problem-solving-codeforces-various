// Divisors

#include <bits/stdc++.h>
using namespace std;
 
void NumberOfDivisor(int number)
{
 
    for (int j = 1; j <= number; j++)
    {
        if (number % j == 0)
            cout << j << endl;
    }
}
 
int main()
{
    int n;
    cin >> n;
 
    NumberOfDivisor(n);
    return 0;
}