// Creating Expression1

#include <bits/stdc++.h>
using namespace std;
 
long long arr[30];
long long arrLen, target;
 
bool solve(long long sum, long long index)
{
    if (index == arrLen)
        return sum == target;
 
    bool ok1 = solve(sum + arr[index], index + 1);
    bool ok2 = solve(sum - arr[index], index + 1);
 
    return ok1 || ok2;
}
 
int main()
{
    long long sum = 0;
    cin >> arrLen >> target;
 
    for (int i = 0; i < arrLen; i++)
    {
        cin >> arr[i];
    }
 
    if (solve(arr[0], 1))
        cout << "YES\n";
 
    else
        cout << "NO\n";
 
    return 0;
}