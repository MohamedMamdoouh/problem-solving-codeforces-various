//  Primes from 1 to n

#include <bits/stdc++.h>
using namespace std;
 
bool IsPrime(int number)
{
    if (number <= 1)
        return 0;
 
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
            return 0;
    }
 
    return 1;
}
 
int main()
{
int n;
cin >> n;
 
for (int i = 1; i <= n; i++)
{
    if(IsPrime(i))
    cout << i << " ";
}
cout << endl;
    return 0;
}
