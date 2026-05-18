// Ksenia and Pan Scales

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    string total, added, left = "", right = "";
    cin >> total >> added;
 
    int index = total.find('|');
    left = total.substr(0, index);
    right = total.substr(index + 1);
 
    for (int i = 0; i < added.length(); i++)
    {
        if (left.length() <= right.length())
            left += added[i];
 
        else if (left.length() > right.length())
            right += added[i];
    }
 
    if (left.length() == right.length())
        cout << left << "|" << right << endl;
 
    else
        cout << "Impossible\n";
 
    return 0;
}