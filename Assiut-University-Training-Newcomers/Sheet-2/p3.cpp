// Even, Odd, Positive and Negative

#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
int n;
int x,n_odd=0, n_even=0, n_positive=0, n_negative=0;    
cin >> n;  
 
for (int i=0; i<n; i++){
cin >> x;
if (x%2==0){
n_even ++;
if (x>0)
n_positive++;
if (x<0)
n_negative++;
}
 
else if (x%2!=0){
n_odd ++;
if (x>0)
n_positive++;
if (x<0)
n_negative++;
}
 
}
 
cout << "Even: " << n_even << endl;
cout << "Odd: " << n_odd << endl;
cout << "Positive: " << n_positive << endl;
cout << "Negative: " << n_negative << endl;
 
return 0;
}