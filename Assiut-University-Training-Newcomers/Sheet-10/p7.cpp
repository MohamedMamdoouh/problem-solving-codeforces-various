// Smallest Product

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    long double sum = 0;
 
    cin >> n;
    long long arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += log10(arr[i]);
    }
 
    // sum < X ^ n
    // sum < n * log(X)
    // sum / n < log(X)
 
    long double res = sum / n;
    cout << (long long)pow(10, res) + 1 << endl;
}
   