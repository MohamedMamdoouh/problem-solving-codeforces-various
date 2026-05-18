// Soltan's Mid Number

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    string st[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> st[i];
    }
 
    cout << st[n / 2];
 
    return 0;
}