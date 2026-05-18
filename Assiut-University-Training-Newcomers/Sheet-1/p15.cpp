// Calculator

#include <iostream>
#include <cmath>
#include <algorithm>
#include <cctype>
using namespace std;
 
int main (){
long long A,B;
char S;    
cin >> A >> S >> B;
 
switch (S)
{
case '+':
cout << A + B;
break;
 
case '-':
cout << A - B;
break;
 
case '*':
cout << A * B;
break;
 
case '/':
if (B !=0)
cout << int(A / B);
else
cout  <<  "error";
break;
 
default:
break;
}
 
 
return 0;
}