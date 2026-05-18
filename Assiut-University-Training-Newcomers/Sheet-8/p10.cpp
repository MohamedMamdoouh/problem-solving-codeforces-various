// Lucky Division

#include <bits/stdc++.h>
using namespace std;
 
bool isLucky(string number)
{
    for (int i = 0; i < number.length(); i++)
    {
        if (number[i] == '0' || number[i] == '1' || number[i] == '2' || number[i] == '3' || number[i] == '5' || number[i] == '6' || number[i] == '8' || number[i] == '9')
            return 0;
    }
    return 1;
}
 
int strintToInt(string stNumber)
{
    int number = 0;
    for (int i = 0; i < stNumber.length(); i++)
    {
        number = (number * 10) + (stNumber[i] - '0');
    }
    return number;
}
 
bool isAlmost(string stNumber)
{
    if (isLucky(stNumber))
    {
        return 1;
    }
 
    int number = strintToInt(stNumber);
    for (int i = 4; i <= number; i++)
    {
        string st_I = to_string(i);
        if (isLucky(st_I))
        {
            if (number % i == 0)
            {
                return 1;
            }
        }
    }
    return 0;
}
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    string stNumber;
    cin >> stNumber;
 
    if (isAlmost(stNumber))
        cout << "YES\n";
 
    else
        cout << "NO\n";
 
    return 0;
}