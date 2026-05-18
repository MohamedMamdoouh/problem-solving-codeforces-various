// Swap

#include <bits/stdc++.h>
using namespace std;
 
void swapMade(float n1, float n2)
{
 
    swap(n1, n2);
    cout << n1 << " " << n2 << endl;
}
 
int main()
{
 
    float n1, n2;
    cin >> n1 >> n2;
 
    swapMade(n1, n2);
 
    return 0;
}