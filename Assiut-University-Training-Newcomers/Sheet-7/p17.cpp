// 3n + 1 sequence

#include <bits/stdc++.h>
using namespace std;
 
long long seq(long long n, long long counter)
{
    if (n == 1)
        return counter;
 
    if (n % 2 == 0)
        seq(n / 2, ++counter);
 
    else if (n % 2 != 0)
        seq(3 * n + 1, ++counter);
}
 
int main()
{
 
    long long n;
    cin >> n;
 
    cout << seq(n, 1) << endl;
 
    return 0;
}