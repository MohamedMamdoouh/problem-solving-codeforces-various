// Print from N to 1

#include <bits/stdc++.h>
using namespace std;
 
void print_recu(int n)
{
    if (n == 0)
        return;
 
    cout << n;
    if (n != 1)
        cout << " ";
 
    print_recu(n - 1);
}
int main()
{
    int n;
    cin >> n;
 
    print_recu(n);
    return 0;
}