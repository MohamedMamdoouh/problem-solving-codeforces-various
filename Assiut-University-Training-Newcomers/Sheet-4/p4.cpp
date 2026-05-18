// Strings

#include <bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
 
string st1,st2;
cin >> st1 >> st2;
 
cout << st1.length() << " " << st2.length() << endl;
cout << st1 << st2 << endl;
swap(st1[0], st2[0]);
cout << st1 << " " << st2;
 
}