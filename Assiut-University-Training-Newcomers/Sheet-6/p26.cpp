// Geometry Test

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int r, s;
    cin >> r >> s;
 
    if (s >= r * 2)
        cout << "Square \n";
    else if (r * 2 > sqrt(pow(s, 2) + pow(s, 2)))
        cout << "Circle\n";
    else
        cout << "Complex\n";
}