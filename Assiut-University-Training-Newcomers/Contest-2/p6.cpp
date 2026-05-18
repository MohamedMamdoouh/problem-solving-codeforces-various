//  Break Number

#include <bits/stdc++.h>
using namespace std;
 
int divisible(long long num)
{
 
    int counter = 0;
 
    while (num % 2 == 0)
    {
        num /= 2;
        counter++;
    }
    return counter;
}
 
int main()
 
{
 
    long long tests, times, number, max = 0;
    cin >> tests;
 
    while (tests--)
    {
        cin >> number;
        times = divisible(number);
        if (times > max)
            max = times;
    }
    
    cout << max << endl;
}