//  Three Numbers

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int k, s;
    cin >> k >> s;
    int counter = 0;
    int z;
 
    for (int i = 0; i <= k; i++)
    {
        for (int m = 0; m <= k; m++)
        {
            z = s - i - m;
            if (z >= 0 && z <= k)
                counter++;
        }
    }
 
    cout << counter << endl;
}