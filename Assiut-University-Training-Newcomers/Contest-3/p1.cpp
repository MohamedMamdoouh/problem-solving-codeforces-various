// Square or rectangle

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int n, h, w;
    cin >> n;
 
    while (n--)
    {
        cin >> w >> h;
        if (w == h)
            cout << "Square\n";
        else
            cout << "Rectangle\n";
    }
 
    return 0;
}