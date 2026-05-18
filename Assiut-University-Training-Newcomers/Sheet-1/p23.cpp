// Mathematical Expression

#include <iostream>
#include <cmath>
#include <algorithm>
#include <cctype>
using namespace std;
 
int main (){
float a,b;
double c;
char s, q;
cin >> a >> s >> b >> q >> c;
 
if (s == '+')
{
if (a + b == c)
cout << "Yes";
else
cout << a + b;
}
 
else if (s == '-')
{
if (a - b == c)
cout << "Yes";
else
cout << a - b;
}
 
else if (s == '*')
{
if (a * b == c)
cout << "Yes";
else
cout << a * b;
}
 
return 0;
}