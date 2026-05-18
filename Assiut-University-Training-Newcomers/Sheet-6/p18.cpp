// Distance points


#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    long double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
 
    long double result = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    cout << fixed << setprecision(9) << result << endl;
}