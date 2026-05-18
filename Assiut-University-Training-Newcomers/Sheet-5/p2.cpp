// Print

#include <bits/stdc++.h>
using namespace std;
 
 
 
void printN(int n){
    for (int i = 1; i <= n; i++)
    {
        cout << i;
        if (n != i)
        cout << " ";
    }
    
}
int main()
{
 
 
    int n;
    cin >> n;
    printN(n);
 
    return 0;
}