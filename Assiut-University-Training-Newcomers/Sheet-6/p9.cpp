// Divisability 

#include <bits/stdc++.h>
using namespace std;
 
long long sum(long long num)
{
    return num * (num + 1) / 2;
}
 
int main()
{
    long long a, b, x;
    cin >> a >> b >> x;
 
    long long maxNum = max(a, b);
    long long minNum = min(a, b);
 
    cout << sum(maxNum / x) * x - sum((minNum - 1) / x) * x;
 
    return 0;
}