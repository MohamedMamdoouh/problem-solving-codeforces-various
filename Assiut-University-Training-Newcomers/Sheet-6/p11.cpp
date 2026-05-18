// Combination and Permutation


#include <bits/stdc++.h>
using namespace std;
 
long long getFactorial(long long number)
{
    long long sum = 1;
    for (long long i = 1; i <= number; i++)
    {
        sum *= i;
    }
    return sum;
}
 
int main()
{
    long long num1, num2;
    cin >> num1 >> num2;
 
    cout << getFactorial(num1) / (getFactorial(num1 - num2) * getFactorial(num2)) << " ";
    cout << getFactorial(num1) / getFactorial(num1 - num2) << endl;
 
    return 0;
}