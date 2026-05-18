// Hurry Up

#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    int x, y;
    cin >> x >> y;
 
    if (y != 0)
        cout << x % y << endl;
 
    else
        cout << -1 << endl;
        
    return 0;
}
