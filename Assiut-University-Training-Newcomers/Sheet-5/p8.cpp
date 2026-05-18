// N Times

#include <bits/stdc++.h>
using namespace std;
 
void nTimes(int n, char c)
{
 
    for (int i = 0; i < n; i++)
    {
        cout << char(c) << " ";
    }
}
 
int main()
{
    int testCases;
    cin >> testCases;
 
    int n;
    char c;
 
    while (testCases)
    {
        cin >> n >> c;
        nTimes(n, c);
        cout << endl;
        testCases--;
    }
 
    return 0;
}