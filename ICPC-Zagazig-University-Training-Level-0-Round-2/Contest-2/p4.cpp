// Soltan and Magical Indices 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], maxx[n], minn[n], mx = -1, mn = 10000000, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, a[i]);
            maxx[i] = mx;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            mn = min(mn, a[i]);
            minn[i] = mn;
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] == maxx[i] && a[i] == minn[i])
                ans++;
        }
        cout << ans << endl;
    }
 
    return 0;
}
