// Fox And Snake

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, m;
    bool flag = 1;
    cin >> n >> m;
 
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            cout << string(m, '#') << endl;
 
        else if (flag)
        {
            cout << string(m - 1, '.') << "#" << endl;
            flag = !flag;
        }
 
        else
        {
            cout << "#" << string(m-1, '.') << endl;
            flag = !flag;
        }
    }
 
    return 0;
}