// Float or int

#include <iostream>
#include <cmath>
#include <algorithm>
#include <cctype>
using namespace std;
 
int main (){
double x;
cin >> x;
 
if (floor (x) == x)
cout << "int " << x;
else
cout << "float " << floor (x) << " " << x - floor (x);
 
return 0;
}