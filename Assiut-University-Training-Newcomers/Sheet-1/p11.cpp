// Max and Min

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main (){
long long A,B, C, minimum, maximum;
cin >> A >> B >> C;
 
minimum = min(A, min(B,C));
maximum = max (A, max(B,C));
 
cout << minimum << " " << maximum << endl;
return 0;
}