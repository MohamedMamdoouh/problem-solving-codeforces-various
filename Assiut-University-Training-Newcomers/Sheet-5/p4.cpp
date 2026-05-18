//  Prime Function

#include <bits/stdc++.h>
using namespace std;
 
bool IsPrime(int number)
{
    if (number == 1)
        return false;
 
    for (int i = 2; i <= round(sqrt(number)); i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}
 
int main()
{
    int n;
    cin >> n;
    int numToCheck;
    string s = "";
    while (n)
    {
        cin >> numToCheck;
        if (IsPrime(numToCheck))
            s += "1"; // cout << "YES\n";
        else
            s += "0"; // cout << "NO\n";
        n--;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            cout << "YES\n";
        else
            cout << "NO\n";
    }
 
    return 0;
}