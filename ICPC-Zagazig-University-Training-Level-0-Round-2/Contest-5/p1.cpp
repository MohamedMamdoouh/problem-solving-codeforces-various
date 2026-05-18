//  Soltan Was Bored

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
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    long long a, b;
    cin >> a >> b;
 
    if(b >= a)
    cout << getFactorial(a) << endl;
    else
    cout << getFactorial(b) << endl;
 
    return 0;
}