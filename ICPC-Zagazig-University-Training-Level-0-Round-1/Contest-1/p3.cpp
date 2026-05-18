// Next Alphabet

#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
char ch1,ch2;
cin >> ch1;
ch1 = tolower(ch1);
if (ch1 == 'z')
cout << "a";
else
{
ch2 = ch1 + 1;
cout << ch2;
}
return 0;
}