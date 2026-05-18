// Range Sum

#include <bits/stdc++.h>
using namespace std;
 
long long sumInRange(long long l, long long r)
{
 
    if (l > r)
        swap(r, l);
 
    l--;
    long long  result1 = l * (l + 1) / 2;
    long long  result2 = r * (r + 1) / 2;
    return result2 - result1;
 
}
 
int main()
 
{
    int n;
    long long le, ri;
 
    cin >> n;
 
    while (n--)
    {
        cin >> le >> ri;
        cout << sumInRange(le, ri) << endl;
    }
}