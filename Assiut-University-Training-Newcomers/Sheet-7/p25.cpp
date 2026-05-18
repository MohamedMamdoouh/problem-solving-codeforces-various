// Number of Ways

#include <bits/stdc++.h>
using namespace std;
 
int x, y;
 
int solve(int current)
{
    if (current == y)
        return 1;
 
    if (current > y)
        return 0;
 
    return solve(current + 1) + solve(current + 2) + solve(current + 3);
}
 
int main()
{
    cin >> x >> y;
    cout << solve(x) << endl;
 
    return 0;
}