//Is Triangle

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int a, b, c;
    cin >> a >> b >> c;
 
    int s, area;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
 
    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "Valid" << endl;
        cout << area << endl;
    }
 
    else
        cout << "Invalid";
}