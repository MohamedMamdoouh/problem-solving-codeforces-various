// Soltan Organizes The Lunch Break

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
        int a, b, c;
        cin >> a >> b >> c;
 
        int minRoad = min(a, min(b, c));
 
        if (minRoad == a)
            cout << "First\n";
 
        else if (minRoad == b)
            cout << "Second\n";
 
        else
            cout << "Third\n";
    }
}