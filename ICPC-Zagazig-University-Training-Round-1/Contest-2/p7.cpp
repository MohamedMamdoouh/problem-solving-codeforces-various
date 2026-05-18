// Prime Digit

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
 
    long long number;
    int digit, counter = 0;
    cin >> number;
 
    while (number)
    {
        digit = number % 10;
        if (IsPrime(digit))
        {
            counter++;
        }
        number /= 10;
    }
 
 
    cout << counter << endl;
 
    return 0;
}