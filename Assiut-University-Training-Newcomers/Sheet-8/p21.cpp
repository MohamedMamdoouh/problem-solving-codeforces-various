// Ilya and Bank Account

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    string n;
    cin >> n;
 
    string n1 = n, n2 = n;
    n1.erase(n1.length() - 1, 1);
    n2.erase(n2.length() - 2, 1);
 
    long long nInt = stoi(n);
    long long n1Int = stoi(n1);
    long long n2Int = stoi(n2);
 
    cout << max(nInt, max(n1Int, n2Int));
 
    return 0;
}