// Helpful Maths



#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    string s;
    cin >> s;
    int arr[1000] = {0}, k = 0;
 
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
            arr[k++] = s[i] - '0';
    }
 
    sort(arr, arr + k);
 
    for (int i = 0; i < k; i++)
    {
        cout << arr[i];
        if (k - i != 1)
            cout << "+";
    }
 
    return 0;
}