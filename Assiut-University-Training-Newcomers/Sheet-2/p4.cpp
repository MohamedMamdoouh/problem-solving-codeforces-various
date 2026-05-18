// Fixed Password

#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
int n;
 
for (int i=0; ; i++){
cin >> n;
if (n==1999){
cout << "Correct";
break;
}
else{
cout << "Wrong" << endl;    
continue;
}
}
 
return 0;
}