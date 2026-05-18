// Fraction

#include <bits/stdc++.h>
using namespace std;
 
long long lcm(long long a, long long b)
{
    return abs(a * b) / __gcd(a, b);
    //return (a / __gcd(a, b)) * b;
}
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    long long n1, n2, n3, n4;
    char c1, c2;
 
    cin >> n1 >> c1 >> n2;
    cin >> n3 >> c2 >> n4;
 
    long long numurator = lcm(n1, n3);
    long long denomitor = __gcd(n2, n4);
 
    cout << numurator << "/" << denomitor << endl;
 
    return 0;
}