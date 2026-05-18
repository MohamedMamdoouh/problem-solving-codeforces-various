// Prime Fibonacci

#include <bits/stdc++.h>
using namespace std;
 
bool IsPrime(long long number)
{
    if (number <= 1)
        return 0;
 
    for (long long i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
            return 0;
    }
 
    return 1;
}
 
long long fib(int number)
{
    long long fib[100];
    fib[0] = 0;
    fib[1] = 1;
 
    for (int i = 2; i <= number; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[number - 1];
}
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    bool prime[51] = {0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0};
 
    while (t--)
    {
        int n;
        cin >> n;
 
        if (prime[n] == 1)
            cout << "prime\n";
        else
            cout << "not prime\n";
    }
 
    return 0;
}