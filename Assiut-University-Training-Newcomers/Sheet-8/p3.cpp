// Koko And The Transformation

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, m;
    long long sumN = 0, sumM = 0;
    cin >> n >> m;
    int arrN[n], arrM[m];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arrN[i];
        sumN += arrN[i];
    }
 
    for (int j = 0; j < m; j++)
    {
        cin >> arrM[j];
        sumM += arrM[j];
    }
 
    if (sumN == sumM)
        cout << "Yes\n";
 
    else
        cout << "No\n";
 
    return 0;
}
