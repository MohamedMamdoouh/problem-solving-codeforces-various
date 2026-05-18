// Bear and Big Brother

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a, b, counter = 0;
    cin >> a >> b;
    // 4 9
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        counter++;
    }
    // 8 , 18 
    cout << counter << endl;
 
    return 0;
}