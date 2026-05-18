// Elections

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    long long testCases, a, b, c;
    cin >> testCases;
 
    while (testCases--)
    {
        cin >> a >> b >> c;
        long long maxNum = max(a, max(b, c));
 
        if (a == b && b == c)
            cout << 1 << " " << 1 << " " << 1;
 
        else if (maxNum == a && maxNum != b && maxNum != c)
            cout << 0 << " " << (maxNum - b + 1) << " " << (maxNum - c + 1);
 
        else if (maxNum == b && maxNum != a && maxNum != c)
            cout << (maxNum - a + 1) << " " << 0 << " " << (maxNum - c + 1);
 
        else if (maxNum == c && maxNum != b && maxNum != a)
            cout << (maxNum - a + 1) << " " << (maxNum - b + 1) << " " << 0;
 
        else if (maxNum == a && maxNum == b)
            cout << 1 << " " << 1 << " " << maxNum - c + 1;
 
        else if (maxNum == a && maxNum == c)
            cout << 1 << " " << maxNum - b + 1 << " " << 1;
 
        else if (maxNum == b && maxNum == c)
            cout << maxNum - a + 1 << " " << 1 << " " << 1;
 
        cout << endl;
    }
}