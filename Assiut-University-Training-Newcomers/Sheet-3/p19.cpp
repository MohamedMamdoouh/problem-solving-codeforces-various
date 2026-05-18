// Frequency Array

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int n, m;
    cin >> n >> m;
 
    int arr[n], freq[m + 1] = {0};
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
 
    for (int j = 1; j < m + 1; j++)
    {
        cout << freq[j] << endl;
    }
 
    return 0;
}
