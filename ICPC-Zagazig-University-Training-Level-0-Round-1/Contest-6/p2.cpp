//  Digits Sum

#include <bits/stdc++.h>
using namespace std;
 
int sum(int number)
{
    if (number == 1)
        return 0;
 
    else if (number < 9)
        return 0;
 
    else
        return ((number - 9) / 10 + 1);
}
 
int main()
{
    int t, n;
    cin >> t;
 
    while (t--)
    {
        cin >> n;
        cout << sum(n) << endl;
    }
 
    return 0;
}