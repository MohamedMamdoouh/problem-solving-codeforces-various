// Range sum query

#include <bits/stdc++.h>
using namespace std;
 
long long prefixSum(int size, vector<long long> vPre, vector<long long> vNumbers, int L, int R)
{
    vPre[0] = vNumbers[0];
 
    for (int i = 1; i < size; i++)
    {
        vPre[i] = vNumbers[i] + vPre[i - 1];
    }
 
    if (L == 0)
        return vPre[R];
 
    return vPre[R] - vPre[L - 1];
}
 
int main()
{
    cin.tie(0);
    cout.sync_with_stdio(0);
 
    int n, q, L, R;
    cin >> n >> q;
    vector<long long> vNumbers(n), vPre(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> vNumbers[i];
    }
 
    vPre[0] = vNumbers[0];
    for (int i = 1; i < n; i++)
    {
        vPre[i] = vNumbers[i] + vPre[i - 1];
    }
 
    while (q--)
    {
        cin >> L >> R;
        L--;
        R--;
 
        if (L == 0)
            cout << vPre[R] << endl;
 
        else
            cout << vPre[R] - vPre[L - 1] << endl;
 
        // cout << prefixSum(n, vPre, vNumbers, L - 1, R - 1) << endl;
    }
 
    return 0;
}