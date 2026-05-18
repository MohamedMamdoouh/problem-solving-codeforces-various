// Two numbers

#include <iostream>
#include <cmath>
using namespace std;
 
int main (){
double A,B, result;
cin >> A >> B;
result = A/B;
cout << "floor " << A << " / " << B << " = " << floor(result) << endl;
cout << "ceil " << A << " / " << B << " = " << ceil(result) << endl;
cout << "round " << A << " / " << B << " = " << round(result) << endl;
 
return 0;
}