// Juicer

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, b, d, ornage, sum = 0, counter = 0;
    cin >> n >> b >> d;
 
    while (n--)
    {
        cin >> ornage;
 
        if (ornage <= b)
            sum += ornage;
 
        if (sum > d)
        {
            counter++;
            sum = 0;
        }
    }
 
    cout << counter << endl;
 
    return 0;
}