//Help Koko

#include <bits/stdc++.h>
using namespace std;
 
bool IsPrime(int number)
{
    if (number <= 1)
        return 0;
 
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
            return 0;
    }
 
    return 1;
}
 
int main()
{
 
    int size, exp, op;
    cin >> size >> exp;
    int arr[size];
 
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
 
    for (int i = 0; i < size; i++)
    {
        cin >> op;
 
        if (op == 1)
        {
            if (IsPrime(arr[i]) == false)
            {
                cout << -1 << " ";
            }
            else
            {
                if (arr[i] % 2 == 0)
                    cout << 0 << " ";
 
                else
                    cout << 5 << " ";
            }
        }
        else
        {
            cout << 0 << " ";
        }
    }
 
    return 0;
}