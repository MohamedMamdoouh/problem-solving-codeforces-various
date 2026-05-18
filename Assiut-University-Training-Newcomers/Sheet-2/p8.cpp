// Factorial

#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
int n;
long long fact=1;    
cin >> n;
 
for (int i=0; i<n; i++){
int x;    
cin >> x;
    for (int k=1; k<=x; k++){
    fact*=k;
    }
    cout << fact << endl;
    fact = 1;
}
return 0;
