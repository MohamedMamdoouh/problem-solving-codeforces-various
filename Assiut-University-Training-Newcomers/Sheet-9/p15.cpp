//Yaroslav and Permutations

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    int freq[105] = {0};
    cin >> n;
    int arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] == arr[j])
                freq[arr[i]]++;
        }
    }
 
    // n >= 2 * C + 1 => n = array size, C is most repeated number
    int *maxCounter = max_element(freq, freq + 105);
 
    if (n >= 2 * *maxCounter - 1)
        cout << "YES\n";
 
    else
        cout << "NO\n";
 