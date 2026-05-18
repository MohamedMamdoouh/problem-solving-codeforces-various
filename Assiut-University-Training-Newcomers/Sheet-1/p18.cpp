// Age in Days

#include <iostream>
#include <cmath>
#include <algorithm>
#include <cctype>
using namespace std;
 
int main (){
long x;
cin >> x;
 
int years = x/365;
int months = (x%365)/30;
int days = ((x%365)%30);
cout << years << " years" << endl << months << " months" << endl << days << " days" << endl;
 
return 0;
}