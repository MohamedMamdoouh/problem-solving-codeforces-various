// Watermelon

#include <bits/stdc++.h>
using namespace std;
 
bool isPossible(int number)
{
    if (number < 4)
        return 0;
        
    if (number % 2 == 0)
        return 1;
}
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
 
    if (isPossible(n))
        cout << "YES\n";
 
    else
        cout << "NO\n";
 
    return 0;
}