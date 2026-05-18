//  Diverse Team

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, k, counter = 0;
    cin >> n >> k;
 
    vector<int> student(n), freqArr(1001, 0), indices;
 
    for (int i = 0; i < n; i++)
    {
        cin >> student[i];
 
        if (freqArr[student[i]] == 0) // add if first occurrence only
            indices.push_back(i + 1);
 
        freqArr[student[i]]++;
    }
 
    if (indices.size() < k)
        cout << "NO\n";
 
    else
    {
        cout << "YES\n";
 
        for (int i = 0; i < k; i++)
        {
            cout << indices[i] << " ";
        }
    } 
    return 0;
}