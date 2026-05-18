//  Sort Numbers

#include <iostream>
#include <cmath>
#include <algorithm>
#include <cctype>
using namespace std;
 
int main (){
int x, y, z, minimum, maximum, num;
cin >> x >> y >> z;
minimum = min ({x,y,z});
maximum = max ({x,y,z});
int middle = x + y + z - minimum - maximum;
cout << minimum << endl;
cout << middle << endl;
cout << maximum << endl;
cout << endl;
cout << x << endl;
cout << y << endl;
cout << z << endl;
 
return 0;
}