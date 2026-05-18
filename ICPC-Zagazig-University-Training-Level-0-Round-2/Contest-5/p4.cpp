// Soltan is Counting Pairs

#include <iostream>
using namespace std;
 
int main()
{
    int n, m;
    cin >> n >> m;
 
    long long counter = 0;
 
    for (int i = 1; i <= n; ++i)
    {
        counter += (m + i % 5) / 5;
    }
 
    cout << counter << endl;
 
    return 0;
}