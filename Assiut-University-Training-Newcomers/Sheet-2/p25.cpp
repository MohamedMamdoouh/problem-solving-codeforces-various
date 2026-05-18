//Convert To Decimal 2

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    long long n;
 
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long sum = 0;
        int i = 0;
        int digit = 0;
        while (n)
        {
            digit = n % 2;
            n /= 2;
            if (digit == 1)
            {
                sum += pow(2, i);
                i++;
            }
        }
        cout << sum << endl;
    }
 
    return 0;
}