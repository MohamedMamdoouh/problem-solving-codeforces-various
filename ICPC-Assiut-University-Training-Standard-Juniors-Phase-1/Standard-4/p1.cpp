//  Binary Search

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, q;
    cin >> n >> q;
 
    vector<pair<long long, long long>> a(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
 
    while (q--) {
        string type;
        long long x, y;
        cin >> type >> x >> y;
 
        pair<long long, long long> p = {x, y};
 
        if (type == "find") {
            if (binary_search(a.begin(), a.end(), p))
                cout << "found\n";
            else
                cout << "not found\n";
        }
 
        else if (type == "lower") {
            int idx = lower_bound(a.begin(), a.end(), p) - a.begin();
 
            // we want greatest j such that a[j] < p => idx - 1
            if (idx == 0) cout << -1 << "\n";
            else cout << idx - 1 << "\n";
        }
 
        else if (type == "upper") {
            int idx = upper_bound(a.begin(), a.end(), p) - a.begin();
 
            // first element > p
            if (idx == n) cout << -1 << "\n";
            else cout << idx << "\n";
        }
    }
 
    return 0;
}