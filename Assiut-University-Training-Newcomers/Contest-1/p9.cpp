// Lucky Numbers

#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
int n,n1,n2;
cin >> n;
 
n2 = n%10;
n1 = floor (n/10);
if (n2 ==0 )
cout << "YES";
else if ( n1%n2 == 0 || n2%n1 == 0 )
cout << "YES";
else
cout << "NO";
return 0;
}
