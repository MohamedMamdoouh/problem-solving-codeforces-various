// Divisible

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    string n1;
    long long n2, result = 0;
    cin >> n1 >> n2;
 
    for (int i = 0; i < n1.length(); i++)
    {
        result *= 10;
        result += n1[i] - '0';
        result %= n2;
    }
 
    if (result == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
 
    return 0;
}