// Capital or Small or Digit

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main (){
char ch;
cin >> ch;
if (islower(ch))
cout << "ALPHA" << endl << "IS SMALL";
else if (isupper(ch))
cout << "ALPHA" << endl << "IS CAPITAL";
else
cout << "IS DIGIT" << endl;
 
return 0;
}
