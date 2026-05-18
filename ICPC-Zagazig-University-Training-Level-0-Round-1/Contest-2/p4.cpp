// land division

#include <iostream>
using namespace std;
 
int main()
{
    int x, y;
    cin >> x >> y;
    int counter = 0;
 
    while (x > 0 && y > 0)
    {
        if (x >= y)
            x -= y;
 
        else
            y -= x;
 
        counter++;
    }
 
    cout << counter << endl;
 
    return 0;
}