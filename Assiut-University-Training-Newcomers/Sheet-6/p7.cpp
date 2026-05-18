// Summation of its divisors

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long number, sum = 0;
    cin >> number;
 
    for (int i = 1; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            sum += i;
            if (i != sqrt(number))
                sum += number / i;
        }
    }
 
    cout << sum << endl;
 
    return 0;
}