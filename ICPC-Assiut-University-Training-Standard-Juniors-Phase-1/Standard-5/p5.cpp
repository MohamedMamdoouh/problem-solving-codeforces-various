// Even odd subset

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    vector<long long> a(n);
    for (auto &x : a) cin >> x;
 
    int limit = 1 << n;
    long long ans = 0;
 
    for (int mask = 0; mask < limit; mask++) {
        int even = 0, odd = 0;
 
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                if (a[i] % 2 == 0) even++;
                else odd++;
            }
        }
 
        if (even > odd) ans++;
    }
 
    cout << ans << "\n";
}