// Soltan's Hashing Algorithm


#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int testCases;
    cin >> testCases;
 
    while (testCases--)
    {
        bool flag = 0;
        string p, h, pSorted, hSubSorted;
        
        cin >> p >> h;
 
        pSorted = p;
        sort(pSorted.begin(), pSorted.end());
 
        for (int i = 0; i < h.length(); i++)
        {
            hSubSorted = h.substr(i, p.length());
            sort(hSubSorted.begin(), hSubSorted.end());
 
            if (hSubSorted == pSorted)
            {
                cout << "YES\n";
                flag = 1;
                break;
            }
        }
 
        if (!flag)
            cout << "NO\n";
    }
 
    return 0;
}