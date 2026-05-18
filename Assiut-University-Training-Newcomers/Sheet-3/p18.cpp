//  Is B a subsequence of A ?

#include <bits/stdc++.h>
using namespace std;
 
void readArray(int arr[], int &arrLength)
{
 
    cin >> arrLength;
 
    for (int i = 0; i < arrLength; i++)
    {
        cin >> arr[i];
    }
}
 
bool isSubsequence(int arr[], int &arrLength, int arr2[], int &arr2Length)
{
    int i = 0, j = 0;
 
    while (i < arrLength && j < arr2Length)
    {
        if (arr[i] == arr2[j])
        {
            i++;
        }
        j++;
    }
 
    return i == arrLength;
}
 
int main()
{
 
    int m, n;
    cin >> m >> n;
    int arr[m], arr2[n];
 
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
 
    if (isSubsequence(arr2, n, arr, m))
        cout << "YES\n";
    else
        cout << "NO\n";
 
    return 0;
}