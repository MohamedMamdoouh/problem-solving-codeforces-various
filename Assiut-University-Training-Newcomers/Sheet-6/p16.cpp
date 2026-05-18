// Factorial Digits

#include <bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    int number;
    double sum = 0;
    cin >> number;
 
    for (int i = number; i > 0; i--)
    {
       sum+= log10(i);
    }
    
 
    cout << "Number of digits of " << number << "! is " << (int)sum + 1 << endl;
}