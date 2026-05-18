// Wonderful Number

#include <bits/stdc++.h>
using namespace std;
 
bool isOdd(int number)
{
    return (number % 2 != 0);
}
 
bool isPalindrome(int number)
{
    int mod;
    string s1 = "", s2 = "";
 
    while (number > 0)
    {
        mod = number % 2;
        number /= 2;
 
        if (mod == 0)
            s1 += "0";
        else
            s1 += "1";
    }
    s2 = s1;
    reverse(s2.begin(), s2.end());
 
    return s1 == s2;
}
 
int main()
{
 
    int num;
    cin >> num;
 
    if (isPalindrome(num) && isOdd(num))
    cout << "YES\n";
    else
    cout << "NO\n";
 
    return 0;
}