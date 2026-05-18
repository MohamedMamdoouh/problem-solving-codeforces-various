// Sharapova And Her Pocket Money

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int numOfDays, initialMoney, amountOfMoney;
    bool flag = 0;
    long long sum;
    char op;
 
    cin >> numOfDays >> initialMoney;
    sum = initialMoney;
 
    for (int i = 0; i < numOfDays; i++)
    {
        cin >> op;
        cin >> amountOfMoney;
 
        if (op == '-')
            amountOfMoney = amountOfMoney * -1;
 
        if (op == '-' && sum < -1 * amountOfMoney)
            flag = 1;
 
        if (flag == 0)
            sum += amountOfMoney;
 
        flag = 0;
    }
 
    cout << sum << endl;
 
    return 0;
}