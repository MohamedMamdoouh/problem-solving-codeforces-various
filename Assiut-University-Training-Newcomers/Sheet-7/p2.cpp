// Print from 1 to N

#include <bits/stdc++.h>
using namespace std;
int counter = 1;
void print_recu(int n)
{
    if (n == 0)
        return;
        
    cout << counter++ << endl;
    print_recu(n - 1);
}
int main()
{
    int n;
    cin >> n;
 
    print_recu(n);
    return 0;
}