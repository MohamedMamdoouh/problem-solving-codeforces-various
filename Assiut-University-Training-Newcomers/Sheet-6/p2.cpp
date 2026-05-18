// Prime checking

#include <bits/stdc++.h>
using namespace std;
 
bool IsPrime(long long number)
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
 
    long long n;
    cin >> n;
 
    if (IsPrime(n))
        cout << "YES\n";
    else
        cout << "NO\n";
 
    return 0;
}