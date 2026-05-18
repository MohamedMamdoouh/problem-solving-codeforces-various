// One Prime

#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
int n,test=0;
cin >> n;
 
for (int i=2; i<n; i++){
if (n%i==0)
test++;
}
if (test>0)
cout << "NO";
else
cout << "YES";
 
return 0;
 
}