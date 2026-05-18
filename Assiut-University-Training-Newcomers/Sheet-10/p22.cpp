// New Password

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, k;
    cin >> n >> k;
    string result = "";
 
    for (int i = 0; i < n; i++)
    {
        result += char('a' + (i % k));
    }
 
    cout << result << endl;
 
    return 0;
}