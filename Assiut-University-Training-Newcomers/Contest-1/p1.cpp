// Winter Sale

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
 
int main() {
float discount, new_price;
cin >> discount >> new_price;
 
cout << fixed << setprecision(2);
cout << (new_price/ (1-(discount/100)));
return 0;
}