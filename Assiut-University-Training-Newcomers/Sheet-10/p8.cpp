// Chewbaсca and Number

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    long long x, n = 0, multiplier = 1;
    int digit;
    cin >> x;
 
    while (x)
    {
        digit = x % 10;
        x /= 10;
 
        if ((9 - digit < digit) && !(x == 0 && digit == 9))
            digit = 9 - digit;
 
        n += digit * multiplier;
        multiplier *= 10;
    }
 
    cout << n;
    return 0;
}
 