// Array Average

#include <bits/stdc++.h>
using namespace std;
 
long long sumFunc(int arr[], int arrLen, int index, long long sum)
{
    if (index == arrLen)
        return sum;
 
    sum += arr[index];
 
   return sumFunc(arr, arrLen, ++index, sum);
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
 
    double avg = (double)sumFunc(arr, n, 0, 0) / n;
    cout << fixed << setprecision(6) << avg << endl;
 
    return 0;
}