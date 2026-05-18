//  Maximum Distinct Numbers

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long number, formula;
    cin >> number;
 
    formula = (-1 + sqrt(1 + 8 * number)) / 2;
    cout << formula << endl;
 
    return 0;
}