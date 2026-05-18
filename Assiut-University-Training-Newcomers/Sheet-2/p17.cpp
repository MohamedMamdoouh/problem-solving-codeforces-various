//  Numbers Histogram
#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
char s;
int n;
cin >> s >> n;
 
int arr[100];
 
for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}
 
for (int i = 0; i < n; i++)
{
    for (int k = 0; k < arr[i]; k++)
    {
        cout << s;
    }
    cout << endl;
    
}
 
 
    return 0;
}