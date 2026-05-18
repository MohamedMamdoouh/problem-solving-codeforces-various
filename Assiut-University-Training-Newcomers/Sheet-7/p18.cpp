// Palindrome Array

#include <bits/stdc++.h>
using namespace std;
 
bool palindrome(int arr[], int arrLen, int start, int end)
{
 
    if (start >= end)
        return 1;
 
    if (arr[start] != arr[end])
        return 0;
 
    return palindrome(arr, arrLen, ++start, --end);
}
 
int main()
{
 
    int n;
    cin >> n;
    int arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    if (palindrome(arr, n, 0, n - 1))
        cout << "YES\n";
 
    else
        cout << "NO\n";
 
    return 0;
}