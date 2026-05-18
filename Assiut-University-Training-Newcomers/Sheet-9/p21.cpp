// T-primes

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
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
    long long arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
 
        double res = sqrt(arr[i]);
        if (res - (int)res > 0)
        {
            cout << "NO\n";
            continue;
        }
 
        if (IsPrime((int)res))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
 
    return 0;
}