// Max

#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
int n,x,maximum=0;
cin >> n;
 
for (int i=0; i<n; i++){    
cin >> x;
if (x > maximum)
maximum = x;
}
cout << maximum;
return 0;
}