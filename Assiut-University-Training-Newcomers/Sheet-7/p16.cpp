// Log2

#include <bits/stdc++.h>
using namespace std;
 
long long logFunc(long long n, int counter)
{
    if (n == 1)
        return counter;
 
    logFunc (n / 2, ++counter);
}
 
int main()
{
 
    long long n;
    cin >> n;
 
    cout << logFunc(n, 0) << endl;
 
    return 0;
}