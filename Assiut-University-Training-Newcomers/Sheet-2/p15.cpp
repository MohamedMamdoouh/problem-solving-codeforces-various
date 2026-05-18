// Lucky Numbers

#include <bits/stdc++.h>
using namespace std;
 
bool isLuckyNumber(int number)
{
    int digit = 0;
    while (number)
    {
        digit = number % 10;
        if (digit != 4 && digit != 7)
            return 0;
 
        number /= 10;
    }
    return 1;
}
 
void isLuckyBetweenTwoNumbers(int num1, int num2)
{
    bool flag = 1;
    for (int i = num1; i <= num2; i++)
    {
        if (isLuckyNumber(i))
        {
            cout << i << " ";
            flag = 0;
        }
    }
 
    if (flag)
    cout << "-1" << endl;
}
int main()
{
 
    int a, b;
    cin >> a >> b;
    isLuckyBetweenTwoNumbers(a,b);
    return 0;
}