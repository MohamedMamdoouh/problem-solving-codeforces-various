// Is Divisible ?


#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
 
    long long n, a, b;
    cin >> n >> a >> b;
 
    if (a + b <= n)
        cout << n / (a + b) << endl;
 
    else
        cout << 0 << endl;
 
    return 0;
}