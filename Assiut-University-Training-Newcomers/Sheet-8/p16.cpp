//  Police Recruits

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, q, ofiicerCounter = 0, crimes = 0;
    cin >> n;
 
    while (n--)
    {
        cin >> q;
 
        if (q > 0)
        {
            ofiicerCounter += q;
        }
 
        else if (q == -1)
        {
            if (ofiicerCounter <= 0)
                crimes++;
 
            else
                ofiicerCounter -= 1;
        }
    }
 
    cout << crimes << endl;
 
    return 0;
}