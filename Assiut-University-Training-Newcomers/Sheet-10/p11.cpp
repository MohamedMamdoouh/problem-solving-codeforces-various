// Snacktower

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int n;
    cin >> n;
 
    vector <bool> hasFallen (n + 1, false);
    int next = n, snack;
 
    for (int i = 0; i < n; i++)
    {
        cin >> snack;
        hasFallen[snack] = true;
 
        while (next  > 0 && hasFallen[next])
        {
            cout << next << " ";
            next--;
        }
 
        cout << endl;
        
    }
    return 0;
}
 