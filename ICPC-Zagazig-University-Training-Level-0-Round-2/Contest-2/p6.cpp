// Soltan's Pockets

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int n;
    cin >> n;
    int arr[n], freq[1000] = {0};
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
 
    cout << *max_element(freq, freq + 1000);
    return 0;
}