// Magnets

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, counter = 1;
    cin >> n;
    string arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i][1] - arr[i + 1][0] == 0)
            counter++;
    }
 
    cout << counter << endl;
 
    return 0;
}