// Good Number

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t, k, counter = 0;
    string number;
    cin >> t >> k;
 
    while (t--)
    {
        cin >> number;
        bool flag = 0;
 
        for (int j = 0; j <= k; j++)
        {
            if (number.find(j + '0') == string::npos)
            {
                flag = 1;
                break;
            }
        }
 
        if (!flag)
            counter++;
    }
 
    cout << counter << endl;
 
    return 0;
}