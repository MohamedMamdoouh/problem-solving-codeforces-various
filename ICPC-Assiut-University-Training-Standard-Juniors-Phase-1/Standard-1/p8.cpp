//  count a's,

#include <bits/stdc++.h>
using namespace std;
 
 
vector<int> PrefixSum(string s)
{
    vector<int> result(s.length(), 0);
 
    if (s[0] == 'a')
        result[0] = 1;
 
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == 'a')
        {
            result[i] = result[i - 1] + 1;
        }
 
        else
            result[i] = result[i - 1];
    }
 
    return result;
}
int main()
{
 
    string s;
    cin >> s;
 
    int q;
    cin >> q;
 
    int L, R;
    int size = s.length();
 
    vector<int> vPrefixSum;
 
    vPrefixSum = PrefixSum(s);
 
    while (q--)
    {
        cin >> L >> R;
        L--;
        R--;
 
        if (L == 0)
            cout << vPrefixSum[R] << endl;
 
        else
            cout << vPrefixSum[R] - vPrefixSum[L - 1] << endl;
    }
 
    return 0;
}