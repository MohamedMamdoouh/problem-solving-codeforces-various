// Multiplication table

#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
int n;
cin >> n;
 
for (int i=1; i<=12; i++){
 
     cout << n << " * " << i << " = " << n*i;
     cout << endl;
}
return 0;
}