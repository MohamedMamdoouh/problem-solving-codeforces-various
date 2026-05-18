// Data Type Guessing

#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
long double a, k, n, result;
cin >> n >> k >> a;
result = n*k/a;
 
if ( (floor(result) == result) && (result <= 2147483647 && result >= -2147483648) )
cout << "int";
 
else if (floor(result) != result)
cout << "double";
 
else 
cout << "long long";
return 0;
}