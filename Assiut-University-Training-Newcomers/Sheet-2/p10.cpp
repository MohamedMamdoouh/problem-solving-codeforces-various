// Palindrome

#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include<bits/stdc++.h> 
using namespace std;
 
int main() {
int n,k=0;
cin >> n;
 
string ch1 = to_string (n);
string ch2 = to_string (n);
 
for (int i=ch1.size()-1; i>=(ch1.size())/2; i--){
    swap(ch1[k], ch1[i]);
    k++;   
}
int n2 = stoi(ch1);
cout << n2 << endl;
 
if (ch1==ch2)
cout << "YES";
else
cout << "NO";
 
return 0;
 
}