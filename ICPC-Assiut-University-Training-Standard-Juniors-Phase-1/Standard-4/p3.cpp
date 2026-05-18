// Solve Equation

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    double c, time;
    cin >> c >> time;
 
    double low = 1, high = 1e18;
    double ans = 1;
 
    for (int i = 0; i < 200; i++) { // enough precision
        double mid = (low + high) / 2.0;
 
        double cost = c * mid * log2(mid);
 
        if (cost <= time) {
            ans = mid;
            low = mid;
        } else {
            high = mid;
        }
    }
 
    cout << fixed << setprecision(6) << ans << "\n";
 
    return 0;
}