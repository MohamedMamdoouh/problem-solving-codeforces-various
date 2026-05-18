// Print Recursion

#include <bits/stdc++.h>
using namespace std;
 
void print_recu(int n)
{
    if (n == 0)
        return;
 
    cout << "I love Recursion\n";
    return print_recu(n - 1);
}
int main()
{
    int n;
    cin >> n;
    
    print_recu(n);
    return 0;
}
