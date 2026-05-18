// Next Alphabet

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
 
int main() {
char ch;
cin >> ch;
 
ch = tolower(ch);
if (ch=='z')
cout << "a";
else
{
char result = ch + 1;
cout << result;
}
return 0;
}