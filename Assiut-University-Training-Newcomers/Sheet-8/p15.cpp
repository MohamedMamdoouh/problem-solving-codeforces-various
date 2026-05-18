// Free Ice Cream

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    long long n, x, counterChild = 0, q;
    char op;
 
    cin >> n >> x;
 
    while (n--)
    {
        cin >> op >> q;
 
        if (op == '+')
            x += q;
 
        else
        {
            if (x < q)
            {
                counterChild++;
            }
 
            else
                x -= q;
        }
    }
 
    cout << x << " " << counterChild << endl;
 
    return 0;
}