// Aggressive cows

#include <bits/stdc++.h>
using namespace std;
 
int n, c;
vector<long long> x;
 
bool can(long long dist) {
    int count = 1;
    long long last = x[0];
 
    for (int i = 1; i < n; i++) {
        if (x[i] - last >= dist) {
            count++;
            last = x[i];
        }
    }
 
    return count >= c;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    cin >> n >> c;
    x.resize(n);
 
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
 
    sort(x.begin(), x.end());
 
    long long low = 0, high = x[n - 1] - x[0];
    long long ans = 0;
 
    while (low <= high) {
        long long mid = (low + high) / 2;
 
        if (can(mid)) {
            ans = mid;
            low = mid + 1; // try bigger
        } else {
            high = mid - 1; // try smaller
        }
    }
 
    cout << ans << "\n";
 
    return 0;
}