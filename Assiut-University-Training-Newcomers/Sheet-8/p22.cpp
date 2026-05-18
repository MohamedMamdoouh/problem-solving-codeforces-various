//  Is it rated?

#include <bits/stdc++.h>
using namespace std;
 
int isRated(int cases)
{
    int n1, n2;
 
    cin >> n1 >> n2;
    int n1Copy = n1, n2Copy = n2;
    bool flag = 0;
    cases--;
 
    if (n1 != n2)
        return 1;
 
    while (cases--)
    {
        cin >> n1 >> n2;
        if (n1 != n2)
            return 1;
 
        if (n2Copy < n2)
            flag = 1;
 
        n1Copy = n1, n2Copy = n2;
    }
 
    if (flag)
        return 2;
 
    else
        return 3;
}
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
    int result = isRated(n);
 
    if (result == 1)
        cout << "rated\n";
 
    else if (result == 2)
        cout << "unrated\n";
 
    else
        cout << "maybe\n";
 
    return 0;
}