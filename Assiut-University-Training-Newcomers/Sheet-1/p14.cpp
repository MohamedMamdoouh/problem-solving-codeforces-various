// Char

#include <iostream>
#include <cmath>
#include <algorithm>
#include <cctype>
using namespace std;
 
int main (){
char X;
cin >> X;
 
if (islower(X))
{
X =  toupper(X);
cout << X << endl;
}
else if (isupper(X))
{
X = tolower(X);
cout << X << endl;
return 0;
}
}