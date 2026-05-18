//Katryoshka

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long eyes, mouths, bodies, minNum, result = 0;
    cin >> eyes >> mouths >> bodies;
 
    minNum = min({eyes, mouths, bodies});
    result += minNum;
 
    eyes -= minNum;
    mouths -= minNum;
    bodies -= minNum;
 
    minNum = min({eyes / 2, bodies});
    result += minNum;
 
    cout << result << endl;
 
    return 0;
}