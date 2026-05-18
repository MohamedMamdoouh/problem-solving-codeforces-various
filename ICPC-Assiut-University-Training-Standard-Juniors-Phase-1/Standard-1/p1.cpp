// Count numbers

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int n, q, z, x;
    cin >> n >> q;
 
    vector<int> vSetOfNumbers(n), vFreq(n + 1, 0);
 
    while (q--)
    {
        cin >> z >> x;
 
        if (z == 1)
        {
            vSetOfNumbers.push_back(x);
            vFreq[x]++;
        }
 
        else
        {
            cout << vFreq[x] << endl;
        }
    }
 
    return 0;
}