//  Interesting drink

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int shopCount;
    cin >> shopCount;
 
    vector<int> prices(shopCount);
    for (int i = 0; i < shopCount; i++) {
        cin >> prices[i];
    }
 
    sort(prices.begin(), prices.end());
 
    int queryCount;
    cin >> queryCount;
 
    while (queryCount--) {
        long long money;
        cin >> money;
 
        int result = upper_bound(prices.begin(), prices.end(), money) - prices.begin();
        cout << result << '\n';
    }
 
    return 0;
}