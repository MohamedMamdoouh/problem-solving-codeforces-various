//  Soltan and Color Wheel

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        string s1, s2, colors[8] = {"green", "yellow", "orange", "red", "purple", "violet", "blue", "blue-green"};
        int index1, index2;
        cin >> s1 >> s2;
 
        for (int i = 0; i < 8; i++)
        {
            if (s1 == colors[i])
                index1 = i;
 
            if (s2 == colors[i])
                index2 = i;
        }
 
        cout << min(abs(index1 - index2), 8 - abs(index1 - index2)) << endl;
    }
 
    