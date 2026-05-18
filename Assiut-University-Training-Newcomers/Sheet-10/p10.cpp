// Help Vasilisa the Wise 2

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int r1, r2, c1, c2, d1, d2, k = 1;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
 
    vector<short> setOfNumbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    do
    {
        short a = setOfNumbers[0], b = setOfNumbers[1], c = setOfNumbers[2], d = setOfNumbers[3];
 
        if (r1 == a + b && r2 == c + d &&
            c1 == a + c && c2 == b + d &&
            d1 == a + d && d2 == b + c)
            {
                cout << a << " " << b << endl;
                cout << c << " " << d << endl;
                return 0;
            }
 
    } while (next_permutation(setOfNumbers.begin(), setOfNumbers.end()));
 
    cout << -1 << endl;
 
    return 0;
}