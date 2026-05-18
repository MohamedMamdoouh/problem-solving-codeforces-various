// Power Of Two

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    long long n;
    cin >> n;
 
    double result;
 
    result = log2(n) / log2(2);
    if (result - (int)result > 0)
        cout << "NO\n";
    else
        cout << "YES\n";
 
    return 0;
}