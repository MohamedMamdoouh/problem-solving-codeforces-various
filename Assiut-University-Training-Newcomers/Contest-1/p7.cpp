// Katryoshka

#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
long long n,m,k, min_num, largest=0;
cin >> n >> m >> k;
 
min_num = min({n,m,k});
largest += min_num;
 
n-=min_num;
m-=min_num;
k-=min_num;
 
min_num = min({n/2,k});
largest += min_num;
 
cout << largest;
return 0;
}